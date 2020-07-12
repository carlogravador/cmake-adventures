cmake_minimum_required(VERSION 3.0.0)

project(GTK_PC)

add_executable(${PROJECT_NAME}_app main.cpp)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK3 REQUIRED gtk+-3.0)

target_include_directories(${PROJECT_NAME}_app PRIVATE ${GTK3_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME}_app PRIVATE ${GTK3_LIBRARIES})

message("GTK Include directory: " ${GTK3_INCLUDE_DIRS})
message("GTK Library directory: " ${GTK3_LIBRARIES})
