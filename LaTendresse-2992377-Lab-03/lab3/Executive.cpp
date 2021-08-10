//
//  Executive.cpp
//  lab3
//
//  Created by Matt LaTendresse on 3/8/21.
//  runs the prog 

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "Executive.h"

Executive::~Executive()
{
    myP.peekFront().clear();
}

void Executive::run(std::string file)
{
    std::string f_name="";
    std::string c_name="";
    std::string tryCatch="";
    std::string command="ABC";
    std::ifstream inputFile;
    inputFile.open(file);
    
    while (command !="")
    {
        inputFile>>command;
        if (inputFile.eof()) {
            break;
        }
        else
        {
            if (command == "START")
            {
                inputFile>>c_name;
                startProcess(c_name);
            }
            else if(command == "CALL")
            {
                inputFile>>f_name;
                inputFile>>tryCatch;
              
                callFunction(f_name);
                
            }
            else if( command == "RETURN"){
                returnFuntion();
            }
        }
    }
    
}

void Executive::startProcess(std::string a)
{
    Process app(a);
    app.start();
    myP.enqueue(app);
}

void Executive::callFunction(std::string b)
{
    myP.peekFront().setFunction(b);
    myP.enqueue(myP.peekFront());
    myP.peekFront().call();
    
    myP.dequeue();
}




