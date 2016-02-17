# Eigen LGSM for Eigen >= 3.2

### Installation

```bash
cd eigen_lgsm
mkdir build && cd build
cmake ..
sudo make install
```
To build the documentation, execute `cmake` with the following flag:
```bash
cmake .. -DGENERATE_DOCUMENTATION=ON
```
and run
```bash
make doc
```
All documentation is written to `./doc`. The homepage is at `./doc/html/index.html`.

### CMake usage

```cmake
#find_package(Eigen REQUIRED)
find_package(EigenLgsm REQUIRED)

include_directories(
#	${Eigen_INCLUDE_DIRS}
	${EigenLgsm_INCLUDE_DIRS}
)
```

> Note: You still need Eigen 3 installed in your system !
