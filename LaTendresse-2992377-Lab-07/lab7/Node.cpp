//
//  Stack.cpp
//  lab7
//
//  Created by Matt LaTendresse on 4/5/21.
//  this file initializes the methods defined in the Node.h file and
//  runs the methods that actually get the time for the operations we are timing



#include <iostream>
#include <string>

template <typename T>
Node<T>::Node(T entry)
{
    m_entry = entry;
    m_next = nullptr;
}

template <typename T>
T Node<T>::getEntry() const
{
    return m_entry;
}

template <typename T>
void Node<T>::setEntry(T entry)
{
    m_entry = entry;
}

template <typename T>
Node<T>* Node<T>::getNext() const
{
        return m_next;
}

template <typename T>
void Node<T>::setNext(Node<T>* next)
{
    m_next = next;
}

