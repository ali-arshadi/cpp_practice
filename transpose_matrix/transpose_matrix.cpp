#include <iostream>
using std::cin;
using std::cout;

int main()
{
    // * get the matrix size
    int c, r;
    cout << "Enter the matrix rows: ";
    cin >> r;
    cout << "Enter the matrix columns: ";
    cin >> c;
    // * get numbers for first matrix
    int initialMatrix[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter a number for " << i << j << " :";
            cin >> initialMatrix[i][j];
        }
    }
    // * transpose the initial matrix
    int transposeMatrix[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            transposeMatrix[i][j] = initialMatrix[j][i];
            cout << transposeMatrix[i][j] << "  ";
        }
        cout << "\n";
    }
}