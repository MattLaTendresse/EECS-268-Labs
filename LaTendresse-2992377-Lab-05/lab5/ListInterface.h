/*
@author Matt LaTendresse
@file   ListInterface.h
@date   3/30/2021
@brief  List Interface class defines the pure virtual methods for our list to use later on
*/


#ifndef LISTINTERFACE_H
#define LISTINTERFACE_H

template <typename T>
class ListInterface
{
    public:
    virtual ~ListInterface() {}

    /**
    * @pre The index is valid
    * @post The entry is added to the list at the index, increasing length by 1
    * @param index, position to insert at (1 to length+1)
    * @param entry, value/object to add to the list
    * @throw std::runtime_error if the index is invalid
    */
    virtual void insert(int index, T entry) = 0;

    /**
    * @pre The index is valid
    * @post The entry at given position is removed, reducing length by 1
    * @param index, position to remove at (1 to length)
    * @throw std::runtime_error if the index is invalid
    */
    virtual void remove(int index) = 0;

    /**
    * @pre The index is valid
    * @post None
    * @param index, position to get entry at (1 to length)
    * @throw std::runtime_error if the index is invalid
    */
    virtual T getEntry(int index) const = 0;

    /**
    * @pre None
    * @post None
    * @throw None
    */
    virtual int length() const = 0;

    /**
    * @pre None
    * @post List is empty
    * @throw None
    */
    virtual void clear() = 0;

    /**
    * @pre The index is valid (must already exist)
    * @post Given entry overrides the entry at the given index
    * @param index, position to override at (1 to length)
    * @param entry, value/object to place at given index
    * @throw std::runtime_error if the index is invalid
    */
    virtual void setEntry(int index, T entry) = 0;

};
#endif

