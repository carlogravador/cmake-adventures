cmake_minimum_required(VERSION 3.0.0)

set(VAR OFF)
set(VAR2 VAR)

if(${VAR2})
  message("If block executed")
else()
  message("Else block executed")
endif()

set(Name Alice)

# Unary Tests
if(DEFINED Name)
  message("Name: If block executed")
else()
  message("Name: Else block executed")
endif()

if(DEFINED Age)
  message("Age: If block executed")
else()
  message("Age: Else block executed")
endif()

if(COMMAND target_link_libraries)
  message("target_link_libraries: If block executed")
else()
  message("target_link_libraries: Else block executed")
endif()

if(COMMAND target_link_library)
  message("target_link_library: If block executed")
else()
  message("target_link_library: Else block executed")
endif()

if(EXISTS /home/gravador/.bashrc)
  message("EXISTS .bashrc: If block executed")
else()
  message("EXISTS .bashrc: Else block executed")
endif()

if(EXISTS /home/gravador/bibofile.txt)
  message("EXISTS bibofile.txt: If block executed")
else()
  message("EXISTS bibofile.txt: Else block executed")
endif()

# Binary Tests
set(Name1 Carlo)
set(Name2 Carlo)

if (NOT (Name1 STRLESS Name2))
  message("${Name1} is less than ${Name2}")
elseif(Name1 STRGREATER Name2)
  message("${Name1} is greater than ${Name2}")
elseif(Name1 STREQUAL Name2)
  message("${Name1} is equal ${Name2}")
endif()

#looping commands
set(RepeatingString a)
while(NOT RepeatingString STREQUAL "aaaaaaaaaaa")
  # set(RepeatingString ${RepeatingString}a)
  string(APPEND RepeatingString "a")
  message(${RepeatingString})
endwhile()

set(name_list Alice Bob Charlie)
foreach(name ${name_list})
  message(${name})
endforeach()

foreach(x RANGE 0 10 2)
  message(${x})
endforeach()

set(list1 0 1)
set(list2 5 9)
set(list3 11 12 15)
foreach(x IN LISTS list1 list2 list3)
  message("x = ${x}")
endforeach()

#custom functions
#adding optional arguments
function(printName name_var)
  message("My name is ${name_var}")
  message("ARGC= ${ARGC}")
  message("ARGV= ${ARGV}")
  message("ARGN= ${ARGN}")
  if(DEFINED ARGV0)
    message("My name is ${ARGV0}")
  endif()
  if(DEFINED ARGV1)
    message("My name is ${ARGV1}")
  endif()
  if(DEFINED ARGV2)
    message("My name is ${ARGV2}")
  endif()
  if(DEFINED ARGV2)
    message("My name is ${ARGV3}")
  endif()
  if(DEFINED ARGV3)
    message("My name is ${ARGV3}")
  endif()
endfunction()

set(myName Carlo)
printName(${myName})

printName(Hello World)

set(varname james)
#scopes
function(scope_testing)
  message("Inside function: Before: ${varname}")
  set(varname doggie PARENT_SCOPE)
  message("Inside function: After: ${varname}")
endfunction()

message("Outside function: Before: ${varname}")
scope_testing()
message("Outside function: After: ${varname}")

#macro is like c++ macro, no new scope, just replace
