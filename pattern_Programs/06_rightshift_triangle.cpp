#include <iostream>

int main()
{
    int rows;
    std::cout << "Enter numbers of rows: ";
    std::cin >> rows;

    for (int i = 0; i < rows; i++){

        // Spaces decrease by 1 with each row.
        // First row needs rows - 1 spaces, then subtract i as i increases.

        // For rows = 5:
        // i = 0 => 4 spaces
        // i = 1 => 3 spaces
        // i = 2 => 2 spaces
        // i = 3 => 1 space
        // i = 4 => 0 spaces
        // Therefore: spaces = rows - i - 1.
        for (int j = 0; j < rows - i - 1; j++)
        {
            std::cout << ' ';
        }

        // Start increase by 1 with each row.
        // Since 1 starts at 0, we need i + 1 stars.
        for (int j = 0; j < i + 1; j++)
        {
            std::cout << '*';
        }

        std::cout << '\n';
    }
}
