set(Eigen_HEADERS Lgsm)

message("INCLUDE_INSTALL_DIR ${INCLUDE_INSTALL_DIR}")

install(FILES
  ${Eigen_HEADERS}
  DESTINATION ${INCLUDE_INSTALL_DIR}/unsupported/Eigen COMPONENT Devel
  )

add_subdirectory(src)
