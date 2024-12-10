add_library(mylib STATIC)

target_sources(mylib
    PRIVATE src/mylib.c
    PUBLIC FILE_SET HEADERS
    BASE_DIRS include
    FILES "${CMAKE_CURRENT_SOURCE_DIR}/include/comp/mylib.h")
