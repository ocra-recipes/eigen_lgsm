
set(CMAKE_CXX_FLAGS "-std=c++11 -Wall")

find_package(Eigen3 REQUIRED)

message("

Eigen dir : ${EIGEN3_INCLUDE_DIRS}

")

include_directories(
	${EIGEN3_INCLUDE_DIRS}
	${PROJECT_SOURCE_DIR}/unsupported/
)

add_executable(lgsm test_lgsm.cpp)
