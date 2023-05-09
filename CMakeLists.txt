cmake_minimum_required(VERSION 3.23)
project(projets2 C)

set(CMAKE_C_STANDARD 99)

add_executable(projets2 main.c)
target_link_libraries(projets2 -lmingw32 -lalleg44)
