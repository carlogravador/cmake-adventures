add_library(my_math
  src/addition.cpp
  src/division.cpp)

target_include_directories(my_math PUBLIC include)

install(FILES
  ${CMAKE_CURRENT_SOURCE_DIR}/include/my_math/addition.hpp
  ${CMAKE_CURRENT_SOURCE_DIR}/include/my_math/addition.hpp
  DESTINATION ${CMAKE_INSTALL_PREFIX}/include/my_math)

install(TARGETS
  my_math
  DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/my_math)
