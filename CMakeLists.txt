cmake_minimum_required(VERSION 3.0.0)
project(gtestLearning VERSION 0.1.0)

include(CTest)
enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(testCalc test_calc.cpp calc.cpp)
target_link_libraries(testCalc GTest::GTest GTest::Main gmock)
add_test(calcTest testCalc)

add_executable(gtestLearning main.cpp calc.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
