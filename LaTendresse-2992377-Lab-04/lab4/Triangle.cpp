//
//  Triangle.cpp
//  lab4
//
//  Created by Matt LaTendresse on 3/8/21.
//  initializes the methods for declaring a triangle

#include <stdio.h>
#include "Triangle.h"


Triangle::Triangle(double base, double height) : Shape()
{
    m_base = base;
    m_height = height;
    m_area = (m_base * m_height) / 2;
}

double Triangle::area() const
{
    return m_area;
}

std::string Triangle::shapeName() const
{
    std::string name = "Triangle";
    return name;
}

