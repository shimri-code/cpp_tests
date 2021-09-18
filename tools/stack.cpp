#include <iostream>
#include <vector>
#include "stack.h"

template <typename T>
Stack<T>::Stack(unsigned int _size)
{
    std::cout << "Stack Ctor" << std::endl;

    this->current_element = -1;
    this->size = _size;
    this->stack.reserve(this->size);
}

template <typename T>
Stack<T>::Stack()
{
    std::cout << "Stack Ctor" << std::endl;

    this->current_element = -1;
    this->size = 0;
}

template <typename T>
Stack<T>::~Stack() = default;

template <typename T>
void Stack<T>::push(T element)
{
    // Check is the stack is full
    if (!this->isFull())
    {
        this->stack.push_back(element);
        this->current_element++;
    }
};

template <typename T>
T Stack<T>::pop()
{
    if (!this->isEmpty())
    {
        return this->stack[this->current_element--];
    }

    return -1;
};

template <typename T>
bool Stack<T>::isEmpty()
{
    return (this->current_element == -1);
}

template <typename T>
bool Stack<T>::isFull()
{
    return (this->current_element == this->size);
}

template class Stack<int>;