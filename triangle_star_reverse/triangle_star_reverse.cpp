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
        int starInRow = givenNumber - i;

        // cout << star << space;
        for (int k = 1; k <= givenNumber + givenNumber - i; k++)
        {
            cout << space;
        }
        for (int l = 1; l <= givenNumber - starInRow; l++)
        {
            cout << star;
        }

        cout << "\n";
    }
}