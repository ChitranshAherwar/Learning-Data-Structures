#include <iostream>

int main()
{
    int rows;

    std::cout << "Enter numbers of rows: ";
    std::cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i || i == rows - 1)
            {
                std::cout << '*';
            } else {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
}