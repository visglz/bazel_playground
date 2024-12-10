cmake_minimum_required(VERSION 3.23)

project(myexport LANGUAGES C)

add_subdirectory(lib)

include(GNUInstallDirs)
install(TARGETS mylib FILE_SET HEADERS)
install(FILES template/BUILD DESTINATION .)
