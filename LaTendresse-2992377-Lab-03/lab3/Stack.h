//
//  Stack.h
//  lab3
//
//  Created by Matt LaTendresse on 3/2/21.
//  initializes all methods for stack

#ifndef Stack_h
#define Stack_h
#include "Node.h"

template <typename T>
class Stack
{
    private:
    Node<T>* m_top;
    
    public:
    /**
    *@pre none
    *@post constructor
    *@return none
    **/
    Stack();
    /**
    *@pre none
    *@post deconstructor
    *@return none
    **/
    ~Stack();
    /**
    *@pre there exists a stack to copy
    *@post copies stack into another stack
    *@return returns the new copied stack
    **/
    Stack(const Stack<T>& orig);
    /**
    *@pre none
    *@post assings "=" to copy two stacks
    *@return none
    **/
    void operator= (const Stack<T>& rhs);
    /**
    *@pre there exists a stack
    *@post adds an entry T to the stack
    *@return none
    **/
    void push(T entry);
    /**
    *@pre there exists a stack with at least one entry
    *@post removes entry from top
    *@return none
    **/
    void pop();
    /**
    *@pre there exists a stack
    *@post none
    *@return returns the entry at the top of stack
    **/
    T peek() const;
    /**
    *@pre there exists a stack
    *@post checks if stack is empty
    *@return return true or false
    **/
    bool isEmpty() const;
};
#include "Stack.cpp"

#endif /* Stack_h */

