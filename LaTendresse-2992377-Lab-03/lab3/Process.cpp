//
//  Process.cpp
//  lab3
//
//  Created by Matt LaTendresse on 3/8/21.
//  declares all methods for the process class

#include <iostream>
#include <stdio.h>
#include "Process.h"
Process::Process(std::string name)
{
    m_name = name;
    callstack = new Stack<std::string>;
    callstack->push("main");
}

void Process::setFunction(std::string name)
{
    callstack->push(name);
}

std::string Process::getName()
{
  return(m_name);
}

std::string Process::getFunction()
{
    return (callstack->peek());
}

void Process::start()
{
    std::cout<<m_name<<" added to queue\n";
}

void Process::call()
{
    std::cout<<m_name<<" calls "<<getFunction()<<std::endl;
}

void Process::returnFun()
{
    std::cout<<m_name<<" "<<getFunction()<<" function returned"<<std::endl;
}

bool Process::hasThrow()
{
    if (m_name == "try_catch")
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Process::throwFun()
{
    if (hasThrow()==true)
    {
        std::cout<<m_name<<" exception caught by "<<getFunction()<<" function"<<std::endl;
    }
    else
    {
        std::cout<<m_name<<" terminated due to unhandled exception"<<std::endl;
    }
}

void Process::clear()
{
    while (callstack->isEmpty() != true) {
        callstack->pop();
        m_name = "";
    }
}

