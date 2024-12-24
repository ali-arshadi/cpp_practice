#include <iostream>
using namespace std;
bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

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