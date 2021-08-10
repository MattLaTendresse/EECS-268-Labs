//Author: Matt LaTendresse
//  Queue.cpp
//  3/8/2021
//  Queue.cpp initializes all the methods that we will use
//  When working with our queues


//constructor
template <typename T>
Queue<T>::Queue()
{
    m_front = nullptr;
    m_back = nullptr;
}

template <typename T>
Queue<T>:: ~Queue()
{
    while (isEmpty()!= true) {
        dequeue();
    }
}


//add to end of queue
template <typename T>
void Queue<T>::enqueue(T entry)
{
    Node<T>* newNode = new Node<T>(entry);
    if (isEmpty()== true) {
        m_front = newNode;
        m_back = newNode;
    }
    else
    {
        m_back->setNext(newNode);
        m_front=newNode;
    }
}

//remove from front of queue
template <typename T>
void Queue<T>::dequeue()
{
    Node<T>* temp = m_front->getNext();
    delete m_front;
    m_front = temp;
}

//peek from front of queue
template <typename T>
T Queue<T>::peekFront() const
{
    return m_front->getEntry();
}

//is empty
template <typename T>
bool Queue<T>::isEmpty() const
{
    //not really confident this is right
     if(m_front==nullptr)
     {
         return true;
     }
     else
     {
         return false;
     }
}



