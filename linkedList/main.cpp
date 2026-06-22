#include <iostream>

struct Node
{
    int data;
    Node* next;

};

class LinkedList{
private:
    Node* head;

public:

    LinkedList();
    ~LinkedList();

    void push_back(int value);
    void print_list();
};

LinkedList::~LinkedList()
{
    std::cout << "Destructor is called.\n";

    Node* current = head;

    while(current != nullptr)
    {
        Node* temp = current;

        std::cout << "Deleting: " << temp->data << '\n';

        current = current->next;
        delete temp;

    }
}

LinkedList::LinkedList()
{
    head = nullptr;
}

void LinkedList::push_back(int value)
{
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if(head == nullptr){

        head = newNode;

    }else{

    Node* current = head;

    while(current->next != nullptr)
        {
            current = current->next;
        }

            current->next = newNode;
        }

}

void LinkedList::print_list()
{
        Node* current = head;

    while(current != nullptr)
    {
        std::cout << current->data << '\n';
        current = current->next; // current->next means *(current).next (*ptr).member
    }
}

int main()
{
    LinkedList list;
    
   list.push_back(10);
   list.push_back(20);
   list.push_back(30);
   list.push_back(40);

   list.print_list();

    return 0;
}