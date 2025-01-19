#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int Ra, Ca;
    int Rb, Cb;
    // * get the dimension of the matrix a
    cout << "Please enter the row of the matrix a \n";
    cin >> Ra;
    cout << "Please enter the columns of the matrix a \n";
    cin >> Ca;
    // * get the dimension of the matrix b
    cout << "Please enter the row of the matrix b \n";
    cin >> Rb;
    cout << "Please enter the columns of the matrix b \n";
    cin >> Cb;
    cout << "::Debug to see the inital value of Cb " << Cb << "\n";
    int matrixA[Ra][Ca];
    int matrixB[Rb][Cb];
    // * get the values for the matrix a
    for (int i = 0; i < Ra; i++)
    {
        for (int j = 0; j < Ca; j++)
        {
            cout << "enter the number for matrix a " << i + 1 << ", " << j + 1 << ": \n";
            cin >> matrixA[i][j];
        }
    }
    // * get the values for the matrix b
    for (int i = 0; i < Rb; i++)
    {
        for (int j = 0; j < Cb; j++)
        {
            cout << "enter the number for matrix b (" << i + 1 << ", " << j + 1 << ") \n";
            cin >> matrixB[i][j];
            cout << "::Debug to see the inital value of Cb " << Cb << "\n";
        }
    }
    // * do the math
    // ! Cij = (Ai1 * B1j) + ... + (Ain * Bnj)
    int matrixC[Ra][Cb];
    for (int i = 0; i < Ra; i++)
    {
        for (int j = 0; j < Cb; j++)
        {
            for (int k = 0; k < Ca; k++)
            {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    // * Print matrix c
    for (int i = 0; i < Ra; i++)
    {
        for (int j = 0; j < Cb; j++)
        {
            cout << matrixC[i][j] << " ";
        }
        cout << "\n";
    }
}
