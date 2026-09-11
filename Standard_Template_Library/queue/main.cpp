#include <iostream>
#include <queue>

int main()
{
    std::queue<int> q;

    std::cout << "Pushing values 10, 20, 30, 40.\n";
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    std::cout << "Front of Queue: " << q.front() << '\n';
    std::cout << "Back of Queue: " << q.back() << '\n';

    q.pop();
    std::cout << "Queue front after pop: " << q.front() << '\n';

    std::cout << "Size of Queue: " << q.size() << '\n';

    std::cout << "Is empty? " << q.empty() << '\n';

}