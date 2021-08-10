//
//  Process.h
//  lab3
//
//  Created by Matt LaTendresse on 3/8/21.
// defines all the methods for the process class

#ifndef Process_h
#define Process_h
#include "Stack.h"
#include "Queue.h"
#include "Node.h"
#include <string>

class Process
{
private:
    Stack<std::string>* callstack;
    std::string m_name;
    bool m_trycatch;
    
public:
    /**
    *@pre none
    *@post default constructor
    *@return none
    **/
    Process(){};
    /**
    *@pre none
    *@post constructor passing name
    *@return none
    **/
    Process(std::string m_name);
    /**
    *@pre none
    *@post deconstructor
    *@return none
    **/
    ~Process(){};
    /**
    *@pre there exists a process
    *@post sets the process with a funciton
    *@return none
    **/
    void setFunction(std::string funtion);
    /**
    *@pre there exists a process
    *@post none
    *@return returns the name
    **/
    std::string getName();
    /**
    *@pre none
    *@post runs the prog
    *@return none
    **/
    void start();
    /**
    *@pre there exists a process with a function
    *@post none
    *@return returns the function of that process
    **/
    std::string getFunction();
    /**
    *@pre there exists a process
    *@post prints to the screen when there is a call
    *@return none
    **/
    void call();
    /**
    *@pre there exists a process
    *@post prints to the screen when there is a return
    *@return none
    **/
    void returnFun();
    /**
    *@pre there exists a process
    *@post pops functions off of that stack
    *@return none
    **/
    void clear();
    /**
    *@pre there exists a process
    *@post checks if process has a throw function
    *@return none
    **/
    void throwFun();
    /**
    *@pre there exists a process
    *@post check if process has throw function
    *@return true or false
    **/
    bool hasThrow();
};

#endif /* Process_h */

