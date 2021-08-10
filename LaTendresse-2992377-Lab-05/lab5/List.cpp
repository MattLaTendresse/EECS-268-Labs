/*
@author Matt LaTendresse
@file   List.cpp
@date   3/30/2021
@brief  this file implements all the methods created in List.h for the list class
*/

#include <iostream>

template <typename T>
List<T>::List()
{
    m_front = nullptr;
    m_length = 0;
}

template <typename T>
List<T>::~List()
{
    clear();

}

template <typename T>
void List<T>::insert(int index, T entry)
{
    if(index>m_length+1||index<1)
      {
        throw(std::runtime_error("Invalid Position for insert()."));
      }
      else
      {
        Node<T>* temp = new Node<T>(entry);
          //front of list
        if(index == 1)
        {
//          temp->setNext(m_front);
          m_front=temp;
        }
          //back of list
        else if(index == m_length+1)
        {
          Node<T>* temp2 = m_front;
          while(temp2->getNext()!=nullptr)
          temp2=temp2->getNext();
          temp2->setNext(temp);
        }
          //middle of list
        else
        {
          Node<T>* temp2 = m_front;
          Node<T>* temp3 = m_front;
          for(int i=1; i<index-1; i++)
          temp2=temp2->getNext();
          for(int i=1; i<index; i++)
          temp3=temp3->getNext();
          temp2->setNext(temp);
          temp2->getNext()->setNext(temp3);
        }
        m_length++;
      }
}

//double check this cause this is fucked up
template <typename T>
void List<T>::remove(int index)
{
    Node<T>* prevNode = m_front;
    Node<T>* nextNode = m_front->getNext();
    if(index == 1)
    {
        Node<T>* tempNode = m_front;
        m_length = m_length - 1;
    }
    else if(index > 1 && index <= m_length)
    {
        for(int i=2;i <= (index-1);i++)
        {
            prevNode = prevNode->getNext();
            nextNode = nextNode->getNext();
        }
        //maybe dont need this
        //or maybe just setNext(nextNode)
        prevNode->setNext(nextNode->getNext());
        delete nextNode;
        m_length = m_length -1;
    }
    else
    {
        throw(std::runtime_error("remove at invalid index.\n"));
    }
}

template <typename T>
T List<T>::getEntry(int index) const
{
    if(index>m_length||index<1)
      {
        throw(std::runtime_error("Invalid Position for getEntry()."));
      }
      else
      {
        Node<T>* temp = m_front;
        for(int i=1; i<index; i++)
        {
          temp=temp->getNext();
        }
        return(temp->getEntry());
      }
}

template <typename T>
int List<T>::length() const
{
    return m_length;
}

template <typename T>
void List<T>::clear()
{
    for (int i = m_length; i > 0 ; i++) {
        remove(i);
    }
}

template <typename T>
void List<T>::setEntry(int index, T entry)
{
    /*
     Node<T>* temp = nullptr;
    for (int i=1; i < index; i++) {
        temp=temp->getNext();
    }
    temp->setEntry(entry);
     */
    if(index>m_length||index<1)
      {
        throw(std::runtime_error("Invalid Position for replace()."));
      }
      else
      {
        Node<T>* temp = m_front;
        for(int i=1; i<index; i++)
        temp = temp->getNext();                  //get to position one before remove postion.
        temp->setEntry(entry);
      }
}



