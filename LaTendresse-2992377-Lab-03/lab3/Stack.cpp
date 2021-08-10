//
//  Stack.cpp
//  lab3
//
//  Created by Matt LaTendresse on 3/2/21.
//


template <typename T>
Stack <T> ::Stack()
{
    m_top=nullptr;
}

template <typename T>
Stack<T>::~Stack()
{
    while (isEmpty() != true) {
        pop();
    }
}


template <typename T>
bool Stack<T>::isEmpty() const
{
    if(m_top==nullptr){
        return true;
    }
    else{
        return false;
    }
}

template <typename T>
void Stack<T> :: push (const T value){
    Node<T>* temp= new Node<T>(value);
    if(isEmpty()){
        m_top = temp;
    }
    else
    {
        temp->setNext(m_top);
        m_top=temp;
    }

}
template <typename T>
void Stack<T> :: pop ()
{
        Node<T> *temp=m_top;
        m_top=m_top->getNext();
        delete temp;
        temp=nullptr;
     
}

template <typename T>
T Stack<T> :: peek()const
{
        return(m_top->getEntry());
}



