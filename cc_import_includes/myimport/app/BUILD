load("@bazel_skylib//rules:common_settings.bzl", "bool_flag")

cc_binary(
    name="myimport_myapp",
    srcs = ["src/myapp.c"],
    deps = select({
        "//conditions:default": ["//myexport:mylib"],
        ":use_workaround": ["//myexport:mylib_workaround"]}),
)


bool_flag(
    name = "USE_WORKAROUND",
    build_setting_default = False,
)

config_setting(
    name = "use_workaround",
    flag_values = {
        ":USE_WORKAROUND": "True",
    },
)
