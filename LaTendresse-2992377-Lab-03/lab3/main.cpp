//
//  main.cpp
//  lab3
//
//  Created by Matt LaTendresse on 3/2/21.
//  calls our exec class when there is a proper file input.

#include <iostream>
#include <fstream>
#include <string>
#include "Executive.h"

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

