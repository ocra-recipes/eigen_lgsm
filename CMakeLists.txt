project(EigenLgsm)

cmake_minimum_required(VERSION 2.8)

set(${PROJECT_NAME}_MAJOR_VERSION 3)
set(${PROJECT_NAME}_MINOR_VERSION 2)
set(${PROJECT_NAME}_PATCH_VERSION 0)
set(${PROJECT_NAME}_VERSION
  ${${PROJECT_NAME}_MAJOR_VERSION}.${${PROJECT_NAME}_MINOR_VERSION}.${${PROJECT_NAME}_PATCH_VERSION})
  
option(BUILD_TESTS "Build tests"
       false)

if(BUILD_TESTS)
  add_subdirectory(test)
endif()

include(CMakePackageConfigHelpers)
export(PACKAGE ${PROJECT_NAME})
 
set(INCLUDE_INSTALL_DIR "include/eigen_lgsm")
set(CMAKE_CONFIG_DEST "share/cmake/${PROJECT_NAME}")

# Needs INCLUDE_INSTALL_DIR
add_subdirectory(unsupported)

include(CMakePackageConfigHelpers)

configure_package_config_file(                         
       ${CMAKE_SOURCE_DIR}/EigenLgsmConfig.cmake.in
       ${CMAKE_BINARY_DIR}/EigenLgsmConfig.cmake
       INSTALL_DESTINATION ${CMAKE_CONFIG_DEST}
       PATH_VARS INCLUDE_INSTALL_DIR CMAKE_CONFIG_DEST)

configure_file(EigenLgsmConfigVersion.cmake.in
 "${PROJECT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake" @ONLY)

install(FILES
 "${PROJECT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
 "${PROJECT_BINARY_DIR}/${PROJECT_NAME}ConfigVersion.cmake"
 DESTINATION ${CMAKE_CONFIG_DEST})