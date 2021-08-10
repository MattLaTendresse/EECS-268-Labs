//
//  ShapeContainer.cpp
//  lab4
//
//  Created by Matt LaTendresse on 3/13/21.
//  This file declares all the methods for the ShapeContainer.h
//  which allows us to use the add, print, and remove methods when calling our array

#include <stdio.h>
#include "ShapeContainer.h"
#include <iostream>
ShapeContainer::ShapeContainer(int size)
{
    m_size = size;
    m_arrayOfShapes = new Shape*[m_size];
    for (int i =0; i<m_size; i++) {
        m_arrayOfShapes[i] = nullptr;
    }
}

ShapeContainer::~ShapeContainer()
{
    for (int i=0; i<m_size-1; i++) {
        delete m_arrayOfShapes[i];
    }
    delete m_arrayOfShapes;
}

double ShapeContainer::area(int index) const
{
    if (index<m_size-1) {
        return (m_arrayOfShapes[index]->area());
    }
    else if(index > m_size-1)
    {
        throw (std::runtime_error("Does not exist\n"));
        return 0;
    }
    else if(m_arrayOfShapes[index] == nullptr)
    {
        throw (std::runtime_error("Does not exist\n"));
        return 0;
    }
    else return 0;
}

std::string ShapeContainer::shapeName(int index) const
{
    if (index < m_size-1)
    {
        std::cout<<"Shape at index "<<index<<": ";
        return m_arrayOfShapes[index]->shapeName();
    }
    else if(index > m_size-1)
    {
        std::string um="";
        throw (std::runtime_error("Does not exist\n"));
        return um;
    }
    else if (m_arrayOfShapes[index] == nullptr)
    {
        std::string un="";
        throw (std::runtime_error("Does not exist\n"));
        return un;
    }
    std::string ub="";
    return (ub);
}

void ShapeContainer::add(Shape* shapePtr, int index)
{
    if (index < m_size-1)
    {
        m_arrayOfShapes[index] = shapePtr;
    }
    else if(index > m_size-1)
    {
        throw (std::runtime_error("Index out of bounds\n"));
    }
    else if (m_arrayOfShapes[index] == nullptr)
    {
        throw (std::runtime_error("Index contains a nullptr \n"));
    }
}

void ShapeContainer::remove(int index)
{
    if (index < m_size-1){
        delete m_arrayOfShapes[index];
    }
    else if (index > m_size-1 )
    {
        throw (std::runtime_error("Index out of bounds\n"));
    }
    else if (m_arrayOfShapes == nullptr)
    {
        throw (std::runtime_error("Index does not contain an object\n"));
    }
}

