#ifndef STACK_H_
#define STACK_H_

#include <iostream>
#include <vector>

template <typename T>
class Stack
{
private:
    unsigned int size;
    int current_element;
    std::vector<T> stack;
    bool isFull();

public:
    Stack();
    Stack(unsigned int _size);
    ~Stack();
    bool isEmpty();
    void push(T element);
    T pop();

    friend std::ostream &operator<<(std::ostream &out, const Stack<T> &stack)
    {
        out << "Stack" << std::endl;
        return out;
    }
};

#endif