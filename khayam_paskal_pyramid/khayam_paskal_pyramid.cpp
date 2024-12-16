#include <iostream>
using namespace std;

int main()
{
    char space = 32;
    int n;
    cout << "Please enter a number! \n";
    cin >> n;
    int result = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << space;
        }
        for (int k = 0; k <= i; k++)
        {
            if (k == 0 || i == 0)
            {
                result = 1;
            }
            else
            {
                result = result * (i - k + 1) / k;
            }
            cout << result << space;
        }

        cout << "\n";
    }
}