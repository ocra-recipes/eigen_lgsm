message("CMAKE_MODULE_PATH : env($ENV{CMAKE_MODULE_PATH})")

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall -ftemplate-backtrace-limit=1000")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

message("CMAKE_MODULE_PATH : ${CMAKE_MODULE_PATH}")

find_package(Eigen3 REQUIRED)

message("

Eigen dir : ${EIGEN3_INCLUDE_DIR}

")

include_directories(
	${EIGEN3_INCLUDE_DIR}
	${PROJECT_SOURCE_DIR}/unsupported/
)

add_executable(test_lgsm test_lgsm.cpp)
add_executable(test_nested test_nested.cpp)
