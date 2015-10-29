project(Eigen_Lgsm)

cmake_minimum_required(VERSION 2.6.2)

set(EigenLgsm_MAJOR_VERSION 3)
set(EigenLgsm_MINOR_VERSION 2)
set(EigenLgsm_PATCH_VERSION 0)
set(EigenLgsm_VERSION
  ${EigenLgsm_MAJOR_VERSION}.${EigenLgsm_MINOR_VERSION}.${EigenLgsm_PATCH_VERSION})
  
option(BUILD_TESTS "Build tests"
       false)

# Offer the user the choice of overriding the installation directories
set(INSTALL_INCLUDE_DIR include/eigen_lgsm CACHE PATH
  "Installation directory for header files")
if(WIN32 AND NOT CYGWIN)
  set(DEF_INSTALL_CMAKE_DIR CMake)
else()
  set(DEF_INSTALL_CMAKE_DIR lib/cmake/eigen_lgsm)
endif()
set(INSTALL_CMAKE_DIR ${DEF_INSTALL_CMAKE_DIR} CACHE PATH
  "Installation directory for CMake files")
  
# Make relative paths absolute (needed later on)
foreach(p LIB BIN INCLUDE CMAKE)
  set(var INSTALL_${p}_DIR)
  if(NOT IS_ABSOLUTE "${${var}}")
    set(${var} "${CMAKE_INSTALL_PREFIX}/${${var}}")
  endif()
endforeach()

add_subdirectory(unsupported)

if(BUILD_TESTS)
  add_subdirectory(test)
endif()

#include(CMakePackageConfigHelpers)
# Export the package for use from the build-tree
# (this registers the build-tree with a global CMake-registry)
export(PACKAGE EigenLgsm)
 
# Create the FooBarConfig.cmake and FooBarConfigVersion files
file(RELATIVE_PATH REL_INCLUDE_DIR "${INSTALL_CMAKE_DIR}"
   "${INSTALL_INCLUDE_DIR}")

# ... for the build tree
set(CONF_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}" "${PROJECT_BINARY_DIR}")
configure_file(EigenLgsmConfig.cmake.in
  "${PROJECT_BINARY_DIR}/EigenLgsmConfig.cmake" @ONLY)
# ... for the install tree
set(CONF_INCLUDE_DIRS "\${EigenLgsm_CMAKE_DIR}/${REL_INCLUDE_DIR}")
configure_file(EigenLgsmConfig.cmake.in
  "${PROJECT_BINARY_DIR}${CMAKE_FILES_DIRECTORY}/EigenLgsmConfig.cmake" @ONLY)
# ... for both
configure_file(EigenLgsmConfigVersion.cmake.in
  "${PROJECT_BINARY_DIR}/EigenLgsmConfigVersion.cmake" @ONLY)
 
# Install the EigenLgsmConfig.cmake and EigenLgsmConfigVersion.cmake
install(FILES
  "${PROJECT_BINARY_DIR}${CMAKE_FILES_DIRECTORY}/EigenLgsmConfig.cmake"
  "${PROJECT_BINARY_DIR}/EigenLgsmConfigVersion.cmake"
  DESTINATION "${INSTALL_CMAKE_DIR}" COMPONENT dev)

  
message("

DEF_INSTALL_CMAKE_DIR : ${DEF_INSTALL_CMAKE_DIR}
INSTALL_CMAKE_DIR : ${INSTALL_CMAKE_DIR}
INSTALL_INCLUDE_DIR : ${INSTALL_INCLUDE_DIR}
REL_INCLUDE_DIR : ${REL_INCLUDE_DIR}
CONF_INCLUDE_DIRS : ${CONF_INCLUDE_DIRS}
EigenLgsm_CMAKE_DIR: ${EigenLgsm_CMAKE_DIR}
 ")     
  