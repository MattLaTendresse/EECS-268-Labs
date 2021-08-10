//
//  Triangle.h
//  lab4
//
//  Created by Matt LaTendresse on 3/8/21.
//  declares the methods for the triangle class

#ifndef Triangle_h
#define Triangle_h
#include "Shape.h"

class Triangle : public Shape
{
private:
    double m_base;
    double m_height;
    double m_area;
    
public:
    /**
    *@pre triangle is called
    *@post triangle of base and height is made
    *@return none
    **/
    Triangle(double base,double height);
    
    /**
    *@pre   a traingle is declared
    *@post  area is calculated using base and height
    *@return area
    **/
    double area() const;
    
    /**
    *@pre a triangle exists
    *@post  a string containing triangle is created
    *@return    return triangle
    **/
    std::string shapeName() const;
    
    
};

#endif /* Triangle_h */

