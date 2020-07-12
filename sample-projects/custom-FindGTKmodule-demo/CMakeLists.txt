cmake_minimum_required(VERSION 3.0.0)

project(GTK_PC)

add_executable(${PROJECT_NAME}_app main.cpp)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules)
find_package(GTK3 REQUIRED)

if(NOT GTK3_FOUND)
	messsage(FATL_ERROR "GTK3 not found")
endif()

target_include_directories(${PROJECT_NAME}_app PRIVATE ${GTK3_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME}_app PRIVATE ${GTK3_LIBRARIES})

message("GTK Include directory: " ${GTK3_INCLUDE_DIRS})
message("GTK Library directory: " ${GTK3_LIBRARIES})
