#include <iostream>
#include "./entities/isPrime.cpp"
using namespace std;

int main()
{
    int numbers[10];
    cout << "please enter 10 numbers! \n";
    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (isPrime(numbers[i]))
        {
            cout << numbers[i] << " ";
        }
    }
}