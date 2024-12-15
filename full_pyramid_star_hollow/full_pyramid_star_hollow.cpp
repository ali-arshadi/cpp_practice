#include <iostream>
using namespace std;

int main()
{
    char star = 42;
    char space = 32;

    int givenNumber;
    cout << "Please enter a number \n";
    cin >> givenNumber;
    // *upper half of the pyramid
    for (int i = 1; i <= givenNumber; i++)
    {
        // * this is a for loop for space
        for (int j = 1; j <= givenNumber - i; j++)
        {
            cout << space;
        }
        // * this is for loop for stars
        for (int k = 1; k <= givenNumber - (givenNumber - i); k++)
        {
            if (k == 1 || i == k)
            {
                cout << star << space;
            }
            else
            {
                cout << space << space;
            }
        }

        cout << "\n";
    }
    // //* lower half of the pyramid
    for (int i = 1; i <= givenNumber - 1; i++)
    {
        // * this is a for loop for space
        for (int j = 1; j <= givenNumber - (givenNumber - i); j++)
        {
            cout << space;
        }

        // * this is a for loop for stars
        for (int k = 1; k <= givenNumber - i; k++)
        {
            if (k == 1 || k == givenNumber - i)
            {
                cout << star << space;
            }
            else
            {
                cout << space << space;
            }
        }

        cout << "\n";
    }
}