#include<iostream>

int factorial(int n)
{
    if(n == 0){
        return 1;
    }
    return n * factorial(n-1);

}

int main()
{
    std::cout << factorial(5) << '\n';
}
// Cmon man it's too easy.
// To be continued in Binary Trees.