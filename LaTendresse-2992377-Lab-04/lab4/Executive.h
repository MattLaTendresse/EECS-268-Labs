//
//  Executive.h
//  lab4
//
//  Created by Matt LaTendresse on 3/8/21.
//  Declared the private variables and public methods for the Executive class

#ifndef Executive_h
#define Executive_h
#include <string>
#include <iostream>
#include "ShapeContainer.h"
#include "Shape.h"

class Executive: public ShapeContainer
{
    
private:
    std::string m_call;
    std::string m_name;
    int size;
public:
    /**
    *@pre Executive object is declared
    *@post constructor is called
    *@return none
    **/
    Executive();
    
    /**
    *@pre there exists a file to read in
    *@post  runs the run method
    *@return none
    **/
    void run(std::string file);
    
    double area();
    
    std::string shapeName();
    
    
    
    
    
/*

    void addFunc(std::string add);

//    MAYBE DONT NEED THESE ^^^
    
    void printFunc(Shape* shapePtr,int index);
    */
    
    
    
    
};

#endif /* Executive_h */

