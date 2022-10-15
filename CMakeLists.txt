cmake_minimum_required(VERSION 3.10)

project(learn-cpp)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_compile_options(-g -Wall -Wextra -pedantic -Werror)

# for address sanitizer
add_compile_options(-fsanitize=address -fno-omit-frame-pointer -O1 -fno-optimize-sibling-calls)
add_link_options(-fsanitize=address)

# for undefined sanitizer
add_compile_options(-fsanitize=undefined)
add_link_options(-fsanitize=undefined)

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
  tests
  tests/hello_test.cc
)

target_include_directories(tests PUBLIC leetcode)
target_link_libraries(
  tests
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(tests)