#include <iostream>

int main()
{
    int var = 67; //variable
    int* ptr = &var; //pointer to variable

    std::cout << *ptr; // pointing to variable. ptr = memory address, *ptr = value in memory address.

    return 0;
}