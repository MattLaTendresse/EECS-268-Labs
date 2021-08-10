//
//  Circle.h
//  lab4
//
//  Created by Matt LaTendresse on 3/8/21.
//  declares the methods and variables for us to make circles

#ifndef Circle_h
#define Circle_h
#include "Shape.h"

class Circle : public Shape
{
private:
    double m_radius;
    double m_area=0;
    
public:
   
    /**
    *@pre circle is called
    *@post circle of radius is made
    *@return none
    **/
    Circle(double radius);
    
    /**
    *@pre a circle exists
    *@post  a string containing circle is created
    *@return    return circle
    **/
    std::string shapeName() const;
    
    /**
    *@pre   a circle is declared
    *@post  area is calculated using radius and pi
    *@return area
    **/
    double area() const;
};

#endif /* Circle_h */

