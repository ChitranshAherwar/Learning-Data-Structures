#include<iostream>

class Stack
{
private:
    int* data;
    int size{0};
    int capacity{4};

public:
    Stack()
    {
        data = new int[capacity];
    }
    ~Stack()
    {
        delete[] data;
        std::cout << "Stack deleted.\n";
    }

    void push(int value);
    bool pop();
    int top();
    bool isEmpty();
    int getSize();
    void resize();
};

void Stack::push(int value)
{
    if(size == capacity)
    {
        resize();
    }

    data[size] = value;
    size++;
}

bool Stack::pop()
{
    if(size == 0)
    {
        return false;
    }
    size--;
    return true;
}

int Stack::top()
{

    if(size == 0)
    {
    std::cout << "Stack is empty.\n";
    return -1;
    }

    std::cout << "Top of stack: " << data[size-1] << '\n';
    return data[size-1];
}

bool Stack::isEmpty()
{
    return size==0;
}

int Stack::getSize()
{
    return size;
}

void Stack::resize()
{

    int newCapacity = capacity*2;
    int* bigger = new int[newCapacity];

    for(int i=0; i<size; i++)
    {
        bigger[i] = data[i];
    }

    delete[] data;
    data = bigger;
    capacity = newCapacity;
}

int main()
{
    Stack a;

    a.push(10);
    a.push(20);
    a.push(30);
    a.push(40);
    a.push(50);

    a.top();
    
    std::cout << "Size: " << a.getSize() << '\n';

    if(a.isEmpty())
    {
        std::cout << "Stack is empty.\n";
    }
    else
    {
        std::cout << "Stack has elements.\n";
    }
}