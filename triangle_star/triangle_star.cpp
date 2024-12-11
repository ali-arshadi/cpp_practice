#include <iostream>
using namespace std;
int main()
{
    char star = 42;
    char space = 32;

    int givenNumber;
    cout << "Please enter a number! \n";
    cin >> givenNumber;
    for (int i = 1; i <= givenNumber; i++)
    {
        /* code */
        int starInRow = givenNumber - i;
        for (int j = 1; j <= givenNumber - starInRow; j++)
        {
            cout << star << space;
        }
        cout << "\n";
    }
}