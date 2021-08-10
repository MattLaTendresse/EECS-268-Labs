//
//  main.cpp
//  lab4
//
//  Created by Matt LaTendresse on 3/8/21.
//  main runs the executive class which runs the program

#include <iostream>
#include "Executive.h"
#include "Shape.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
#include "ShapeContainer.h"

int main(int argc, char* argv[])
{
  if(argc < 2)
  {
    std::cout << "Incorrect number of parameters!\n";
  }
  else
  {
    std::string fileName=argv[1];
    Executive exec;
    exec.run(fileName);
  }
  return(0);
}
