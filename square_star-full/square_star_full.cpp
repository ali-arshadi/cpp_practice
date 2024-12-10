#include <iostream>
using namespace std;

int main()
{
    // ! task is to get number from a user and print start according
    // ! to that number in the shape of square
    char star = 42;
    char space = 32;
    // * need to get to something like this
    // cout << "* * * \n";
    // cout << "* * * \n";
    // cout << "* * * \n";

    // ? how to write the proper loop for this
    int givenNumber;
    cout << "Please enter a number! \n";
    cin >> givenNumber;
    for (int i = 0; i < givenNumber; i++)
    {
        /* code */
        for (int i = 0; i < givenNumber; i++)
        {
            /* code */
            cout << star << space;
        }
        cout << "\n";
    }
}