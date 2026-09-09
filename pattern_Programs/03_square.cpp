#include <iostream>

int main()
{
    int rows;

    std::cout << "Enter number of rows: ";
    std::cin >> rows;

    for (int i = 0; i < rows; i++){

        for (int j = 0; j < rows; j++){
            std::cout << '*';
        }
        std::cout << '\n';
    }
}