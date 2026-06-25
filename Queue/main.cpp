#include<iostream>

class Queue
{
private:
    int* data;
    int size{0};
    int capacity{10};

public:
    Queue()
    {
        data = new int[capacity];
    }
    ~Queue()
    {
        delete[] data;
        std::cout << "Queue Deleted.\n";
    }

    void enqueue(int value);
    bool dequeue();
    int front();

    bool isEmpty();
    int getSize();

};

void Queue::enqueue(int value)
{
    if(size == capacity){
        std::cout << "Queue full.\n";
        return;
    }
    data[size] = value;
    size++;

    std::cout << "Enqueue: " << data[size - 1] << '\n';
}

bool Queue::dequeue()
{
    if(size == 0){
        return false;
    }
    std::cout << "Dequeue: " << data[0] << '\n';

    for(int i=0; i<(size-1); i++){
        data[i] = data[i+1];
    }
    size--;
    return true;
}

int Queue::front()
{
    if(size == 0)
    {
        std::cout << "Queue is empty.\n";
        return -1;
    }
    return data[0];
}

bool Queue::isEmpty()
{
    return size == 0;
}

int Queue::getSize()
{
    return size;
}

int main()
{
    Queue a;

    a.enqueue(10);
    a.enqueue(20);
    a.dequeue();
    std::cout << "size: " << a.getSize() << '\n';
    a.enqueue(30);
    
}