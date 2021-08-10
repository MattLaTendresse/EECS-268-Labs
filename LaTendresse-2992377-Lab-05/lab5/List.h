/*
@author Matt LaTendresse
@file   List.h
@date   3/30/2021
@brief  this file creates the methods to be implemented in the List class
*/

#ifndef List_h
#define List_h

#include "ListInterface.h"
#include "Node.h"

template <typename T>
class List : public ListInterface<T>
{
    
protected:
    int m_length;
    Node<T>* m_front;
    
public:
    
    //constructor
    List();
    ~List();
    // ADD THE COMMENTS FOR THIS
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
     * @param index, position to remove at (1 to length)
     * @throw std::runtime_error if the index is invalid
     */
    void remove(int index);
    /**
    * @pre The index is valid
    * @post None
    * @param index, position to get entry at (1 to length)
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
#include "List.cpp"
#endif /* List_h */


