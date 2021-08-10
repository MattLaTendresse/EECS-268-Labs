//
//  ShapeContainer.h
//  lab4
//
//  Created by Matt LaTendresse on 3/8/21.
//  This file contains premade methods for us to use to
//  construct an array of shapes and have methods to interact with array

#ifndef ShapeContainer_h
#define ShapeContainer_h
#include "Shape.h"
#include <stdexcept>

class ShapeContainer
{
   public:
   ShapeContainer(int size); //initialize pointers in m_arrayOfShapes to nullptr
   ~ShapeContainer();
   double area(int index) const; //throws a std::runtime_error if index is invalid, meaning out of range OR index has nullptr
   std::string shapeName(int index) const; //throws a std::runtime_error if index is invalid, meaning out of range OR index has nullptr
   void add(Shape* shapePtr, int index); //throws a std::runtime_error if index is invalid OR if shapePtr is nullptr
   void remove(int index); //throws a std::runtime_error if the index is invalid OR there is no object to delete
   private:
   Shape** m_arrayOfShapes;
   int m_size;
};

#endif /* ShapeContainer_h */

