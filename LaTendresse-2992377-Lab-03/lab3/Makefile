lab3: main.o Process.o Executive.o
	g++ -std=c++11 -g -Wall main.o Process.o Executive.o -o lab3

main.o: main.cpp Node.h Node.cpp Stack.h Stack.cpp Queue.h Queue.cpp Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

Process.o: Process.h Process.cpp
	g++ -std=c++11 -g -Wall -c Process.cpp

Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

clean:
	rm *.o lab3

