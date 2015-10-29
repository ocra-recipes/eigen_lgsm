
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

find_package(Eigen REQUIRED)

include_directories(
	${Eigen_INCLUDE_DIRS}
	${PROJECT_SOURCE_DIR}/unsupported/
)
add_executable(lgsm test_lgsm.cpp)

