lab1: main.o Executive.o game.o
	g++ -std=c++11 -g -Wall main.o Executive.o game.o -o lab1

main.o: main.cpp Executive.h game.h
	g++ -std=c++11 -g -Wall -c main.cpp

Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp 
game.o: game.h game.cpp
	g++ -std=c++11 -g -Wall -c game.cpp
clean: 
	rm *.o lab1
