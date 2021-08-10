//
//  Circle.cpp
//  lab4
//
//  Created by Matt LaTendresse on 3/8/21.
//  initializes all methods for a circle to be declared
//  allows us to find the area and name of a circle

#include <stdio.h>
#include "Circle.h"
#include <math.h>

Circle::Circle(double radius) : Shape()
{
    m_radius = radius;
    m_area = M_PI * m_radius * m_radius;
}

std::string Circle::shapeName() const
{
    std::string name = "Circle";
    return name;
}

double Circle::area() const
{
    
    return m_area;
}





