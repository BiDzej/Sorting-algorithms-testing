output: main.o Algorithms.o SortingMachine.o SortTest.o Interface.o
	g++ main.o Algorithms.o SortingMachine.o SortTest.o Interface.o -o exe
	rm *.o

main.o: main.cpp
	g++ -c main.cpp
	
Algorithms.o: Algorithms.cpp Algorithms.h
	gcc -c Algorithms.cpp

SortingMachine.o: SortingMachine.cpp SortingMachine.h
	gcc -c -std=c++11 SortingMachine.cpp
	
SortTest.o: SortTest.cpp SortTest.h
	gcc -c -std=c++11 SortTest.cpp

Interface.o: Interface.cpp Interface.h
	gcc -c Interface.cpp