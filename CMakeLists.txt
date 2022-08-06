cmake_minimum_required(VERSION 3.10)

project(test)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(-g -Wall -Wextra -pedantic -Werror)

add_executable(test
    main.cpp
)