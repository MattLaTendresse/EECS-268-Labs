lab4: main.o Executive.o ShapeContainer.o Triangle.o Circle.o Rectangle.o
	g++ -std=c++11 -g -Wall main.o Executive.o ShapeContainer.o Triangle.o Circle.o Rectangle.o -o lab4

main.o:main.cpp Executive.h Shape.h Triangle.h Circle.h Rectangle.h ShapeContainer.h
	g++ -std=c++11 -g -Wall -c main.cpp

Executive.o: Executive.cpp Executive.h Triangle.h Circle.h Rectangle.h ShapeContainer.h
	g++ -std=c++11 -g -Wall -c Executive.cpp

Triangle.o: Triangle.cpp Triangle.h
	g++ -std=c++11 -g -Wall -c Triangle.cpp

Circle.o: Circle.cpp Circle.o 
	g++ -std=c++11 -g -Wall -c Circle.cpp

Rectangle.o: Rectangle.cpp Rectangle.h
	g++ -std=c++11 -g -Wall -c Rectangle.cpp

ShapeContainer.o: ShapeContainer.cpp ShapeContainer.h
	g++ -std=c++11 -g -Wall -c ShapeContainer.cpp

clean:
	rm *.o lab4

