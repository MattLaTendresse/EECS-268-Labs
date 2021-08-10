/*
@author Matt LaTendresse
@file   main.cpp
@date   3/30/2021
@brief  this file takes in the arguments and passes them into an executive object
 */

#include <iostream>
#include "List.h"
#include "Executive.h"
#include "BrowserHistoryInterface.h"
#include <string>

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::cout << "Invalid number of parameters." << std::endl;
  } else {
      std::string fileName = argv[1];
      Executive exec;
      exec.run(fileName);
      
  }
    return 0;
}

