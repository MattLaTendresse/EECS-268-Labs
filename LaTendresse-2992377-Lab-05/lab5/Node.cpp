/*
@author Matt LaTendresse
@file   Node.cpp
@date   3/30/2021
@brief  This file implements all the methods created for the Node class
*/
#include <stdio.h>

template <typename T>
Node<T>::Node(T entry)
{
    m_entry = entry;
    m_next = nullptr;
}

template <typename T>
T Node<T>::getEntry() const
{
    return(m_entry);
}

template <typename T>
void Node<T>::setEntry(T entry)
{
    m_entry = entry;
}

template <typename T>
Node<T>* Node<T>::getNext() const
{
    return(m_next);
}

template <typename T>
void Node<T>::setNext(Node<T>* next)
{
    m_next = next;
}




