#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    // std::vector<int> vec = {10, 20, 30, 40, 50}; can also do this.

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    vec.push_back(60);

    std::cout << "Size: " << vec.size() << '\n';

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << "Element: " << vec[i] << '\n';
    }

    vec.pop_back();

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << "2 Element: " << vec[i] << '\n';
    }

    std::cout << "Element at 3: " << vec.at(3) << '\n';
    std::cout << "Is empty? " << vec.empty() << '\n';
    std::cout << "Capacity: " << vec.capacity() << '\n';
    std::cout << "Clearnig vector.\n";
    vec.clear();
    std::cout << "Is empty after clearing? " << vec.empty() << '\n';
}