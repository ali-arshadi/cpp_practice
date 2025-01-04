#include <iostream>
#include "../namespaces/Ali.cpp"
int main()
{
    int numbers[10];
    std::cout << "please enter 10 numbers! \n";
    for (int i = 0; i < 10; i++)
    {
        std::cin >> numbers[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (Ali::Tools::isPrime(numbers[i]))
        {
            std::cout << numbers[i] << " ";
        }
    }
}