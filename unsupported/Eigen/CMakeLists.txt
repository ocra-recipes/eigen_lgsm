set(Eigen_HEADERS Lgsm)

install(FILES
  ${Eigen_HEADERS}
  DESTINATION ${INSTALL_INCLUDE_DIR}/unsupported/Eigen COMPONENT Devel
  )

add_subdirectory(src)
