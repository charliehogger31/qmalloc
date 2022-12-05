cmake_minimum_required(VERSION 3.24)
project(qmalloc C)

set(CMAKE_C_STANDARD 11)

add_library(qmalloc qmalloc.c)
set_target_properties(qmalloc PROPERTIES PUBLIC_HEADER "qmalloc.h")

add_library(nullshim SHARED nullshim.c)

link_directories(AFTER ./cmake-build-debug)
link_libraries(qmalloc)
add_executable(qmallocTest test.c)

install(TARGETS qmalloc
        LIBRARY DESTINATION /lib
        PUBLIC_HEADER DESTINATION /usr/include)