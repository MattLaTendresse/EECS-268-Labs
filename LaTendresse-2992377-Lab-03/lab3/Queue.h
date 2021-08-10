//  Author: Matt LaTendresse
//  Queue.h
//  3/8/2021
//  Queue.h declares all private and public methods for queue.cpp

#ifndef Queue_h
#define Queue_h
#include "Node.h"

template <typename T>
class Queue
{
    private:
    Node<T>* m_front;
    Node<T>* m_back;
    
    public:
    /**
    *@pre none
    *@post default constructor
    *@return none
    **/
    Queue();
    /**
    *@pre none
    *@post deconstructor
    *@return none
    **/
    ~Queue();
    /**
    *@pre there exists a queue to copy
    *@post transfers data from one queue to another
    *@return returns the new copied queue
    **/
    Queue(const Queue<T>& orig);
    
    /**
    *@pre there exists a queue
    *@post assings the "=" to be able to copy two queue's
    *@return none
    **/
    void operator= (const Queue<T>& rhs);
    /**
    *@pre there exists a queue
    *@post adds data to the front of the queue
    *@return none
    **/
    void enqueue(T entry);
    /**
    *@pre there exists a queue
    *@post removes data from the back of the queue
    *@return none
    **/
    void dequeue();
    /**
    *@pre there exists a queue with data
    *@post none
    *@return returns data type T from front of queue
    **/
    T peekFront() const;
    /**
    *@pre there exists a queue
    *@post checks if empty
    *@return returns true or false
    **/
    bool isEmpty() const;
    
};
#include "Queue.cpp"

#endif /* Queue_h */

