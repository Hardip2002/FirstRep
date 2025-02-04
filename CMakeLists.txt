cmake_minimum_required(VERSION 3.10)
project(project-name)

set(CMAKE_CXX_STANDARD 11)

enable_testing()

add_executable(cal cal.cpp)

include(GoogleTest)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(cal_test tests/cal_test.cpp)
target_link_libraries(cal_test GTest::GTest GTest::Main)

gtest_discover_tests(cal_test)