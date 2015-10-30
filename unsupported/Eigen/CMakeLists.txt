set(Eigen_HEADERS Lgsm)

if(NOT INCLUDE_INSTALL_DIR)
	message(FATAL_ERROR "INCLUDE_INSTALL_DIR is empty")
endif()

install(FILES
  ${Eigen_HEADERS}
  DESTINATION ${INCLUDE_INSTALL_DIR}/Eigen COMPONENT Devel
  )

add_subdirectory(src)
