# Eigen LGSM for Eigen >= 3.2

### Installation

```bash
cd eigen_lgsm
mkdir build && cd build
cmake .. 
sudo make install 
```

### CMake usage

```cmake
find_package(Eigen REQUIRED)
find_package(EigenLgsm REQUIRED)

include_directories(
	${Eigen_INCLUDE_DIRS}
	${EigenLgsm_INCLUDE_DIRS}
)
```

> Note: You still need Eigen, you can add this file https://ceres-solver.googlesource.com/ceres-solver/+/master/cmake/FindEigen.cmake in your project folder/cmake and add set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake) so cmake can find it.
