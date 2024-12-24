#include <iostream>
#include <vector>
using namespace std;
//* the function checks if a number is prime!
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
vector<int> getPrimeNumbers(vector<int> array)
{
    vector<int> answerArray;
    for (int i = 0; i < array.size(); i++)
    {
        if (isPrime(array[i]))
        {
            answerArray.push_back(array[i]);
        }
    }
    return answerArray;
}
int main()
{
    vector<int> givenNumbers;
    cout << "Please enter 10 numbers!\n";
    for (int i = 1; i <= 10; i++)
    {
        int number;
        cin >> number;
        givenNumbers.push_back(number);
    }
    vector<int> answerArray = getPrimeNumbers(givenNumbers);
    cout << "answer Array: ";
    for (int i = 0; i < answerArray.size(); i++)
    {
        cout << answerArray[i] << " ";
    }
}