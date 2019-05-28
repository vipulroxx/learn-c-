#include <iostream>
using namespace std;
int main()
{
    int i, j, row = 3, col = 3;
    int m[row][col];
    cout << "Enter elements of matrix A : ";
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            cin >> m[i][j];
        }
    }
    cout << "Matrix A : \n";
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "Transpose of Matrix A : \n";
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            cout << m[j][i] << " ";
        }
        cout << "\n";
    }
}