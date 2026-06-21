#include <iostream>

int main()
{
    int var = 231; //original var.

    int& ref = var; // reference to a var. good practice, put & in data type and not in name of variable.
    int& ref2 = ref; // reference to reference that reference var.

    std::cout << "Printing from ref: " << ref << std::endl; //printing original var through reference.
    std::cout << "Printing memory address of var from ref2: " << &ref2 << std::endl; // reference to memory add. of var.
    std::cout << "Size of var using ref2: " << sizeof(ref2) << std::endl;

}