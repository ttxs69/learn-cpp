cmake_minimum_required(VERSION 3.10)

project(learn-cpp)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(-g -Wall -Wextra -pedantic -Werror)

add_executable(learn-cpp
    main.cpp
)

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

include(CTest)

add_executable(
  hello_test
  tests/hello_test.cc
)

target_include_directories(hello_test PUBLIC leetcode)
target_link_libraries(
  hello_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(hello_test)