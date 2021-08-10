//
//  Executive.cpp
//  lab4
//
//  Created by Matt LaTendresse on 3/8/21.
//  delcares the executive methods, which creates the array, and has the methods to be ran on that array
//  also deletes the array and shit

#include <stdio.h>
#include "Executive.h"
#include "ShapeContainer.h"
#include "Triangle.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Shape.h"
#include <iostream>
#include <fstream>
#include <string>

Executive::Executive() : ShapeContainer(size)
{
}

void Executive::run(std::string file)
{
    int size;
    std::ifstream inputFile;
    inputFile.open(file);
    inputFile>>size;
    ShapeContainer shapeArray(size);
    while (!inputFile.eof())
    {
        int index;
        inputFile>>m_call;

        if (m_call == "ADD")
        {
            std::string shapeName;
            inputFile>>index;
            inputFile>> shapeName;
            
            //check shape
            if(shapeName == "CIR")
            {
                double radius=0;
                inputFile>>radius;
                Shape* cir = nullptr;
                cir = new Circle(radius);
                try {
                    shapeArray.add(cir, index);
                } catch(std::runtime_error& rte) {
                    std::cout<<rte.what();
                }
            }
            
            else if(shapeName =="REC")
            {
                double length,width;
                inputFile>>length;
                inputFile>>width;
                Shape* rec = nullptr;
                rec = new Rectangle(length,width);
                //try the add function with the catch
                try {
                    shapeArray.add(rec, index);
                } catch(std::runtime_error& rte) {
                    std::cout<<rte.what();
                }
            }
            
            else if(shapeName == "TRI")
            {
                double base, height;
                inputFile>>base;
                inputFile>>height;
                Shape* tri = nullptr;
                tri = new Triangle(base,height);
                try {
                    shapeArray.add(tri, index);
                } catch(std::runtime_error& rte)
                {
                    std::cout<<rte.what();
                }
            }
        //fix this
        }
        else if(m_call == "DELETE")
        {
            
            inputFile>>index;
            shapeArray.remove(index);
        }
        //fix this
        else if (m_call == "PRINT")
        {
            
            inputFile>>index;
            try
            {
                //its printing the shape at index first, fix that
            std::cout<<shapeArray.shapeName(index)<<" area = "<<shapeArray.area(index)<<std::endl;
            }
            catch (std::runtime_error& rte)
            {
                std::cout<<"Shape at index "<<index<<": "<<rte.what();
            }
        }
        else{
            std::cout<<"Exiting..."<<std::endl;
            //where tf do i delete tis
            for (int i=0; i<size; i++) {
                shapeArray.remove(i);
            }
            
        }
        
    }

}

