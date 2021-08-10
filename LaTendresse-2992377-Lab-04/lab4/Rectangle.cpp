//
//  Rectangle.cpp
//  lab4
//
//  Created by Matt LaTendresse on 3/8/21.
//  initializes all the methods in rectangle.h which allows us to make
//  a rectangle and find the name and area of a rectangle

#include <stdio.h>
#include "Rectangle.h"

Rectangle::Rectangle(double length, double width) : Shape()
{
    m_area = (length * width);
}

std::string Rectangle::shapeName() const
{
    std::string name = "Rectangle";
    return name;
}

double Rectangle::area() const
{
    return m_area;
}







