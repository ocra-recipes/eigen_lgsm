FILE(GLOB Eigen_Lgsm_SRCS "*.h")

INSTALL(FILES
  ${Eigen_Lgsm_SRCS}
  DESTINATION ${INCLUDE_INSTALL_DIR}/unsupported/Eigen/src/Lgsm COMPONENT Devel
  )