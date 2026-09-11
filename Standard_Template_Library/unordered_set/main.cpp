#include <iostream>
#include <unordered_set>

// Avrage complexity of insert, count, erase, size is O(1)
// Complexity is not guaranteed O(1)

int main()
{
    std::unordered_set<int> set; //This creates an empty set of int data type.

    set.insert(10);
    set.insert(20);
    set.insert(20); // Duplicate insertion so there will be only one 20 in set.
    set.insert(30);


    if (set.count(20)) // If 20 exists in set, it returns 1, 0 otherwise.
    {
        std::cout << "Exists" << '\n';
    }

    std::cout << "Loop through set: ";
    for (int x : set) // Loop through a set.
    {
        std::cout << x << " ";
    }
    std::cout << '\n';

    std::cout << "Erasing an element." << '\n';
    set.erase(20);
    std::cout << "Set after erasing: ";

    for (int x : set)
    {
        std::cout << x << " ";
    }
    std::cout << '\n';

    if (set.empty()) // returns true if empty.
    {
        std::cout << "Set is empty." << '\n';
    } else {
        std::cout << "Set is not empty." << '\n';
    }
    
    std::cout << "Size of set: " << set.size() << '\n';
}