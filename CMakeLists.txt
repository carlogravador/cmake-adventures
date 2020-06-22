cmake_minimum_required(VERSION 3.0.0)

project(Calculator_Project VERSION 1.0.0)

add_subdirectory(my_math)
add_subdirectory(my_print)

add_executable(calculator
  main.cpp)

target_link_libraries(calculator PRIVATE my_math my_print)


# CACHE and ENV variables are Globa;
# CACHE variables are stored in CMakeListCache.txt
# ENV variables are not

# set(MY_CACHE_VARIABLE "WEE")
set(MY_CACHE_VARIABLE "I'm A Cache Variable" CACHE STRING
    "This command sets variable MY_CACHER_VARIABLE in a persistent cache")

# Using CACHE when dereferencing will directly lookup the variable in the cmakelistcache.txt
message($CACHE{MY_CACHE_VARIABLE})

message($ENV{PATH})

message("Root Level CMAKE_PROJECT_NAME: ${CMAKE_PROJECT_NAME}")
message("Root Level PROJECT_NAME: ${PROJECT_NAME}")
