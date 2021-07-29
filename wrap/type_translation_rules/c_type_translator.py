from text import code
from type_translator import TypeTranslator


def is_cap(t):
    return t.is_record() and t.is_template_instantiation('L4::Cap')


def is_ipc_cap(t):
    return t.is_record() and t.is_template_instantiation('L4::Ipc::Cap')


def is_cap_indirection(t):
    return t.is_record_indirection() and \
           t.pointee().is_template_instantiation('L4::Cap')


def is_ipc_cap_indirection(t):
    return t.is_record_indirection() and \
           t.pointee().is_template_instantiation('L4::Ipc::Cap')


class CTypeTranslator(TypeTranslator('c')):
    rule = TypeTranslator('c').rule

    @rule(lambda t: is_cap(t) or is_ipc_cap(t) or \
                    is_cap_indirection(t) or is_ipc_cap_indirection(t))
    def target(cls, t, args):
        return 'l4_cap_idx_t'

    @rule(lambda t: is_cap(t) or is_cap_indirection(t))
    def input(cls, t, args):
        if is_cap_indirection(t):
            t = t.pointee().without_const()

        return code(
            f"""
            auto _{{interm}} = {t}({{inp}});
            {{interm}} = &_{{interm}};
            """)

    @rule(lambda t: is_ipc_cap(t) or is_ipc_cap_indirection(t))
    def input(cls, t, args):
        if is_ipc_cap_indirection(t):
            t = t.pointee().without_const()

        t_inner = t.template_arguments()[0]

        return code(
            f"""
            auto _{{interm}} = {t}(L4::Cap<{t_inner}>({{inp}}));
            {{interm}} = &_{{interm}};
            """)

    @rule(lambda t: is_cap(t))
    def output(cls, t, args):
        return "return {outp}.cap();"

    @rule(lambda t: is_cap_indirection(t))
    def output(cls, t, args):
        return "return {outp}->cap();"

    @rule(lambda t: is_ipc_cap(t))
    def output(cls, t, args):
        return "return {outp}.cap().cap();"

    @rule(lambda t: is_ipc_cap_indirection(t))
    def output(cls, t, args):
        return "return {outp}->cap().cap();"
