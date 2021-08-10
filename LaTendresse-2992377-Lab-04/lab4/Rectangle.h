//
//  Rectangle.h
//  lab4
//
//  Created by Matt LaTendresse on 3/8/21.
//  Declares the private variables and public methods for the rectangle class

#ifndef Rectangle_h
#define Rectangle_h
#include "Shape.h"


class Rectangle : public Shape
{
    
    private:
    double m_length;
    double m_width;
    double m_area;
    std::string m_name;
    public:
    /**
    *@pre A rectangle object is declared
    *@post constructor called
    *@return none
    **/
    Rectangle(double length, double width);
    
    
    /**
    *@pre there exists a length and width
    *@post it gives an area associated with a rectangle
    *@return area
    **/
    double area() const;
    
    /**
    *@pre array of shapes made
    *@post gives name associated with a rectangle
    *@return name
    **/
    std::string shapeName() const;
    
    
    
};

#endif /* Rectangle_h */

