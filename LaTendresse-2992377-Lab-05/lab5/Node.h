/*
@author Matt LaTendresse
@file   Node.h
@date   3/30/2021
@brief  This file creates the methods to implemented in the Node class
*/

#ifndef Node_h
#define Node_h

template <typename T>
class Node 
{
    
private:
    T m_entry;
    Node<T>* m_next;
    
public:
    Node(); // default constructor
    /**
    *@pre the Node does not exist
    *@post create a new node that has no value and point to nothing
    *@return next->nullptr
    **/
    Node(T entry);
    /**
    *@pre the Node does  exist
    *@post deconstructs a node
    *@return none
    **/
    ~Node(){};
    /**
    *@pre there exists a node with an entry in it
    *@post none
    *@return returns the entry a node is pointing to
    **/
    T getEntry() const;
    /**
    *@pre there exists a node
    *@post sets the pointer of that node to a T entry
    *@return none
    **/
    void setEntry(T entry);
    /**
    *@pre There exists at least one node
    *@post none
    *@return returns the node that the origal nodes pointer is pointing at
    **/
    Node<T>* getNext() const;
    /**
    *@pre there exists at least one node
    *@post sets a pointer connecting node to another node
    *@return node
    **/
    void setNext(Node<T>* next);
    
};
#include "Node.cpp"

#endif /* Node_h */

