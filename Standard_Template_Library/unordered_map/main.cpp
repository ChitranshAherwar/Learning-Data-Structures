#include <iostream>
#include <unordered_map>

int main()
{
    // string is key, int is value associated with that key.
    std::unordered_map<std::string, int> ages;

    ages["Tobi"] = 23;
    ages["Madara"] = 25;
    ages["Obito"] = 30;

    // Tobi is the key and 23 is the value associated with it
    // when printing unordered map key is used to print its value associated.
    std::cout << "Tobi: " << ages["Tobi"] << '\n';
    std::cout << "Madara: " << ages["Madara"] << '\n';
    std::cout << "Obito: " << ages["Obito"] << '\n';

    // can also do ages["Tobi"]++ increment by one.
    ages["Tobi"] = 28;
    std::cout << "Tobi value after changing: " << ages["Tobi"] << '\n';

    std::cout << "Key exists? " << ages.count("Tobi") << '\n'; // 1 for exist, 0 Otherwise.

    ages.erase("Madara");
    std::cout << "Key Madara removed.\n";
}