FILE(GLOB eigen_lgsm_headers "*.h")
FILE(GLOB eigen_lgsm_util_headers "util/*.h")

if(NOT INCLUDE_INSTALL_DIR)
	message(FATAL_ERROR "INCLUDE_INSTALL_DIR is empty")
endif()


install(FILES
  ${eigen_lgsm_headers}
  DESTINATION ${INCLUDE_INSTALL_DIR}/Eigen/src/Lgsm COMPONENT Devel
  )

INSTALL(FILES
  ${eigen_lgsm_util_headers}
  DESTINATION ${INCLUDE_INSTALL_DIR}/Eigen/src/Lgsm/util COMPONENT Devel
  )