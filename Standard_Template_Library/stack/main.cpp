#include <iostream>
#include <stack>

int main()
{
    std::stack<int> s;

    std::cout << "pushing elements 10, 20, 30 in stack s.\n";
    s.push(10);
    s.push(20);
    s.push(30);

    std::cout << "Top of stack: " << s.top() << '\n';
    s.pop();
    std::cout << "Top after one pop: " << s.top() << '\n';
    std::cout << "Numbers of elements in stack: " << s.size() << '\n';
    std::cout << "Is empty? " << s.empty() << '\n';
}