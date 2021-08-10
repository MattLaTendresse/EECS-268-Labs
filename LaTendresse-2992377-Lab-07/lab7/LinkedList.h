//
//  LinkedList.h
//  lab7
//
//  Created by Matt LaTendresse on 4/5/21.
//  this file initializes the methods and variables that we are using for our Linked List data structure

#ifndef LinkedList_h
#define LinkedList_h

#include "Node.h"
#include <stdexcept>

template <typename T>
class LinkedList
{
    private:
    Node<T>* m_front;
    int m_length;

    public:
    LinkedList();
    ~LinkedList();

    /**
    * @pre The index is valid
    * @post The entry is added to the list at the index, increasing length by 1
    * @param index, position to insert at (1 to length+1)
    * @param entry, value/object to add to the list
    * @throw std::runtime_error if the index is invalid
    */
    void insert(int index, T entry);

    /**
    * @pre The index is valid
    * @post The entry at given position is removed, reducing length by 1
    * @param index, position to insert at (1 to length)
    * @throw std::runtime_error if the index is invalid
    */
    void remove(int index);

    /**
    * @pre The index is valid
    * @post None
    * @param index, position to insert at (1 to length)
    * @throw std::runtime_error if the index is invalid
    */
    T getEntry(int index) const;

    /**
    * @pre None
    * @post None
    * @throw None
    */
    int length() const;

    /**
    * @pre None
    * @post List is empty
    * @throw None
    */
    void clear();

    /**
    * @pre The index is valid (must already exist)
    * @post Given entry overrides the entry at the given index
    * @param index, position to override at (1 to length)
    * @param entry, value/object to place at given index
    * @throw std::runtime_error if the index is invalid
    */
    void setEntry(int index, T entry);

};

#include "LinkedList.cpp"
#endif /* LinkedList_h */

