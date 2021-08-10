//
//  Executive.h
//  lab3
//
//  Created by Matt LaTendresse on 3/8/21.
//  run the file given and run the command from process.h and call the queue<stack> to store the functions

#ifndef Executive_h
#define Executive_h
#include "Process.h"
#include "Queue.h"
#include "Stack.h"

class Executive
{
private:
    Queue<Process> myP;
    public:
    /**
    *@pre none
    *@post default constructor
    *@return none
    **/
    Executive(){};
    /**
    *@pre none
    *@post deconstructor
    *@return none
    **/
    ~Executive();
    /**
    *@pre there exists a file
    *@post runs the prog reading in from file
    *@return none
    **/
    void run(std::string file);
    /**
    *@pre there exists a file to read in from
    *@post runs the commands when there is a start process
    *@return none
    **/
    void startProcess(std::string a);
    /**
    *@pre there exists a file to read in from
    *@post runs the commands when there is a call process
    *@return none
    **/
    void callFunction(std::string b);
    /**
    *@pre there exists a file to read in from
    *@post runs the commands when there is a return process
    *@return none
    **/
    void returnFuntion(){};
    
};
#endif /* Executive_h */

