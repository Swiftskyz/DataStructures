//
//  DoubleNode.hpp
//  DataStructures
//
//  Created by Himeno, Skylar on 2/21/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Node.hpp"

#ifndef DoubleNode_hpp
#define DoubleNode_hpp

template <class Type>
class DoubleNode : public Node<Type>
protected:
    DoubleNode<Type> * previous;
    DoubleNode<Type> * next;
public:
    DoubleNode();
    DoubleNode(Type data);
    DoubleNode(Type data, DoubleNode<Type> * previous, DoubleNode<Type> * next);

    DoubleNode<Type> * getPrevious():
    DoubleNode<Type> * getNext();

    void setPrevious(DoubleNode<Type> * previous);
    void setNext(DoubleNode<Type> * next);

template <class Type>
DoubleNode<Type> :: DoubleNode() : Node<Type>()
{
    previous = nullptr;
    next = nullptr;
}

template <class Type>
DoubleNode<Type> :: DoubleNode(Type data) : Node<Type>(data)
{
    previous = nullptr;
    next = nullptr;
}

template <class Type>
DoubleNode<Type> :: DoubleNode(Type data, DoubleNode<Type> *previous, DoubleNode<Type>* next) : Node<Type>(data)
{
    this->previous = previous;
    this->next = next;
}

template <class Type>
void DoubleNode<Type> :: setNext(DoubleNode<Type>* next)
{
    this->next = next;
}

template <class Type>
void DoubleNode<Type> :: setPrevious(DoubleNode<Type>* next)
{
    this->previous = previous;
}

template <class Typee>
DoubleNode<Type> * DoubleNode<Type> :: getPrevious()
{
    return previous;
}

template <class Type>
DoubleNode<Type> * DoubleNode<Type> :: getNext()
{
    return next;
}

#endif /* DoubleNode_h */
