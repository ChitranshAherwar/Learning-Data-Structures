#include <iostream>
#include <string>

int main()
{
    std::string s = "hello";
    std::cout << "No operation parformed: " << s << '\n';

    s.push_back('!');
    std::cout << "Push back ! " << s << '\n';

    std::string second = " World!";
    std::cout << "Adding two strings: " << s + second << '\n';

    second.pop_back();
    std::cout << "After pop back on second string: " << s + second << '\n';

    std::cout << "Accessing element by 0th index: " << s[0] << '\n';
    std::cout << "Accessing element by 1st index: " << s[1] << '\n';
    std::cout << "Accessing element by 2nd index: " << s[2] << '\n';
    std::cout << "Accessing element by 3rd index: " << s[3] << '\n';
    std::cout << "Accessing element by 4th index: " << s[4] << '\n';

    s[0] = 'H';
    std::cout << "After modifying single element at 0th index: " << s << '\n';

    std::cout << "s.front: " << s.front() << '\n';
    std::cout << "s.back: " << s.back() << '\n';
    std::cout << "Size of string: " << s.size() << '\n';

}