cmake_minimum_required(VERSION 3.0.0)

# message("Hello World")
#
# set(NAME "BOB Smith")
# set(HEIGHT 190)
# set(LIST_DEMO Bob Smith)
# set(LIST_DEMO1 "Bob" "Smith")
# set(LIST_DEMO2 "Bob;Smith")
#
# message("Hello, my name is ${NAME}, my height is ${HEIGHT}cm and my age is ${AGE} yrs old.")
# message("LIST_DEMO value: ${LIST_DEMO}")
# message(${LIST_DEMO})
# message(${LIST_DEMO1})
# message("${LIST_DEMO1}")
# message("${LIST_DEMO2}")
# message(${LIST_DEMO2})
#
# set(NAME1 Alice)
# set(Alice Bob)
# set(NAME1AliceBob Charlie)
#
# # Variable manipulation
# message(NAME1 ${NAME1} ${${NAME1}})
# message(NAME1${NAME1}${${NAME1}})
# message("NAME1 ${NAME1} ${${NAME1}}")
# message(${NAME1${NAME1}${${NAME1}}})
#
# List manipulation
set(MyList a b c;d "e;f" 2.7 "Hello There")
message(${MyList})

list(APPEND MyList 1.6 XX)
message(${MyList})

list(REMOVE_AT MyList 2 -3)
message(${MyList})

list(REMOVE_ITEM MyList a 2.7)
message(${MyList})

list(INSERT MyList 2 XX 2.7)
message(${MyList})

list(REVERSE MyList)
message(${MyList})

list(REMOVE_DUPLICATES MyList)
message(${MyList})

list(REVERSE MyList)
message(${MyList})

list(REMOVE_ITEM MyList 69)
message(${MyList})

list(LENGTH MyList len_var)

set(another_list 1.6 2.7 XX b d e f)
message("${another_list}")
list(LENGTH another_list len_var)
message(${len_var})
list(GET another_list 2 5 7 sub_list)

