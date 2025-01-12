#include <iostream>

int main()
{
    int arraySize = 5;
    int a[arraySize];
    int b[arraySize];
    int sum[arraySize];

    // * get numbers for the first array
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << "Enter the numbers for the first array \n";
        std::cin >> a[i];
    }
    // * get numbers for the second array
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << "Enter the numbers for the second array \n";
        std::cin >> b[i];
    }
    // * sum two arrays
    for (int i = 0; i < arraySize; i++)
    {
        sum[i] = a[i] + b[i];
        std::cout << sum[i] << " ";
    }
}