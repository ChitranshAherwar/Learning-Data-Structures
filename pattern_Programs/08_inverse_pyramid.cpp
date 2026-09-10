#include <iostream>

int main()
{
    int rows;
    std::cout << "Enter numbers of rows: ";
    std::cin >> rows;

    for (int i = 0; i < rows; i++){

        for (int j = 0; j < i; j++)
        {
            std::cout << ' ';
            
        }

        // for n = 5, we want starting width of 9 stars. So 2 * rows - 1.
        // with each iteration we want to remove 2. remove 1 star for first iteration.
        // So 2 * i, 1st = 2 * 0, 2nd 2 * 1.
        for (int j = 0; j < (2 * rows) - (2 * i) - 1; j++)
        {
            std::cout << '*';
        }

        std::cout << '\n';
    }
}