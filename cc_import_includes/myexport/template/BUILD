
package(default_visibility = ["//visibility:public"])

cc_import(
    name = "mylib",
    hdrs = [
        "include/comp/mylib.h",
    ],
    includes = [
        "include",
    ],
    static_library = "lib/libmylib.a",
)

cc_library(
    name = "mylib_workaround",
    includes = ["include"],
    deps = ["mylib"],
)
