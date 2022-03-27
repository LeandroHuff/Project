# set minimum cmake version
cmake_minimum_required(VERSION 3.14)

# project name and language
project(example LANGUAGES C)

# require C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# example library
add_library(sum sum.c)

# main code
add_executable(sum_up main.c)
target_link_libraries(sum_up PRIVATE sum)

# enable FetchContent
#include(FetchContent)

# declare Catch2
#FetchContent_Declare(Catch2                              # name of the content
#  GIT_REPOSITORY https://github.com/catchorg/Catch2.git  # the repository
#  GIT_TAG        v2.13.7                                 # the tag
#  )

# make available
#FetchContent_MakeAvailable(Catch2)

# testing binary
add_executable(c_test test.c)
target_link_libraries(c_test PRIVATE sum)

# enable testing functionality
enable_testing()

# define tests
add_test(
  NAME c_test
  COMMAND $<TARGET_FILE:c_test> --success
  )
  
