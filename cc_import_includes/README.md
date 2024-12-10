# cc_import_includes

Build with CMake:

```shell
cd myexport
cmake -B build
cmake --build build
cmake --install build --prefix=../myimport/myexport
```

Use in other project:

```shell
cd myimport
bazel build //... --subcommands=pretty_print
```

-> Build fails. The problem is related to `cc_import` setting the include path to `include`only, without the path where the package is located.
 
`cc_import` should prepend the package path, see the [documentation](https://bazel.build/reference/be/c-cpp#cc_import):

> Each string is prepended with the package path


When using a `cc_library` proxy library as workaround the build is successfull:

```shell
bazel build //... --subcommands=pretty_print --//app:USE_WORKAROUND=True
```

The include path is correctly set to `myexport/include`.

See the following related github issues:

- https://github.com/bazelbuild/bazel/issues/18866
- https://github.com/bazelbuild/bazel/issues/19182
