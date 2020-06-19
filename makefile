calculator: main.o addition.o division.o printResult.o
	g++ main.o addition.o division.o printResult.o -o calculator

main.o: main.cpp
	g++ -c main.cpp

addition.o : addition.cpp
	g++ -c addition.cpp

division.o: division.cpp
	g++ -c division.cpp

printResult.o: printResult.cpp
	g++ -c printResult.cpp
