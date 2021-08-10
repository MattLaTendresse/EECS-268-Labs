//
//  Shape.h
//  lab4
//
//  Created by Matt LaTendresse on 3/8/21.
//  this is the interface class that has the methods for each shape to use 

#ifndef Shape_h
#define Shape_h
#include <string>

class Shape
{
   public:
   virtual double area() const = 0;
   virtual std::string shapeName() const = 0;
   virtual ~Shape() {}
};

#endif /* Shape_h */

