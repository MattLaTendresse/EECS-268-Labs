lab3: Executive.o Browser.o main.o
	 g++ -std=c++11 -g -Wall Executive.o Browser.o main.o -o lab3

main.o: main.cpp Node.h Node.cpp List.h List.cpp Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c main.cpp

Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -Wall -c Executive.cpp

Browser.o: Browser.h Browser.cpp
	g++ -std=c++11 -g -Wall -c Browser.cpp
clean:
	rm *.o lab5
