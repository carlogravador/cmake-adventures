cmake_minimum_required(VERSION 3.0.0)

message("Hello World")

set(NAME "BOB Smith")
set(HEIGHT 190)
set(LIST_DEMO Bob Smith)
set(LIST_DEMO1 "Bob" "Smith")
set(LIST_DEMO2 "Bob;Smith")

message("Hello, my name is ${NAME}, my height is ${HEIGHT}cm and my age is ${AGE} yrs old.")
message("LIST_DEMO value: ${LIST_DEMO}")
message(${LIST_DEMO})
message(${LIST_DEMO1})
message("${LIST_DEMO1}")
message("${LIST_DEMO2}")
message(${LIST_DEMO2})
