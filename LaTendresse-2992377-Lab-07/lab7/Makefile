lab7: main.o Executive.o 
	g++ -g -std=c++11 -Wall main.o Executive.o -o lab7
main.o: main.cpp Executive.h Stack.h Stack.cpp Queue.h Queue.cpp LinkedList.h LinkedList.cpp Node.h Node.cpp
	g++ -g -std=c++11 -Wall -c main.cpp
Executive.o: Executive.h Executive.cpp
	g++ -g -std=c++11 -Wall -c Executive.cpp
clean:
	rm *.o lab7
