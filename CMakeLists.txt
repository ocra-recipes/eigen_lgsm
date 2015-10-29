project(Eigen_Lgsm)

cmake_minimum_required(VERSION 2.6.2)

option(BUILD_TESTS "Build tests"
       false)


set(INCLUDE_INSTALL_DIR
  "${CMAKE_INSTALL_PREFIX}/include/eigen_lgsm"
  CACHE INTERNAL
  "The directory where we install the header files (internal)"
)

add_subdirectory(unsupported)

if(BUILD_TESTS)
  add_subdirectory(test)
endif()
