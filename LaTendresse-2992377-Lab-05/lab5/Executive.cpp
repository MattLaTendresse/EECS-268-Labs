/*
@author Matt LaTendresse
@file   Executive.cpp
@date   3/30/2021
@brief  this file implements all the Executive.h methods
*/

#include <stdio.h>
#include <iostream>
#include <fstream>
#include "Executive.h"
#include "List.h"
#include "Node.h"
Executive::Executive()
{
    
}

void Executive::run(std::string fileName)
{
    std::string url="";
    std::string command = "";
    std::ifstream inFile;
    inFile.open(fileName);
    while (!inFile.eof())
    {
        inFile>> command;
        if (inFile.eof())
        {
            break;
        }
        if (command == "NAVIGATE")
        {
            inFile>>url;
            m_browser.navigateTo(url);
        }
        if (command =="BACK")
        {
            m_browser.back();
        }
        if (command=="FORWARD")
        {
            m_browser.forward();
        }
        if (command=="HISTORY")
        {
            m_browser.print();
        }
    }
}

