#include <iostream>
using namespace std;

class Matrix_Chain_Order_Optimal_Parens
{
    int n, *m, *s;
    char name;
    public:
        Matrix_Chain_Order_Optimal_Parens(int size);
        void Optimal_Parens(int *s, int i, int j);
        void Matrix_Chain_Order(int p[]);
};

Matrix_Chain_Order_Optimal_Parens::Matrix_Chain_Order_Optimal_Parens(int size)
{
    n = size;
    name = 'A';
}

void Matrix_Chain_Order_Optimal_Parens::Optimal_Parens(int *s, int i, int j)
{
    if (i == j)
    {
        cout << name++;
        return;
    }
    cout << "(";
    Optimal_Parens(s, i, *((s + i * n) + j));
    Optimal_Parens(s, *((s + i * n) + j) + 1, j);
    cout << ")";
}

void Matrix_Chain_Order_Optimal_Parens::Matrix_Chain_Order(int p[])
{
    int i, j, k, L, q;
    int m[n][n], s[n][n];
    for (i = 1; i < n; i++)
    {
        m[i][i] = 0;
    }
    for (L = 2; L < n; L++)
    {
        for (i = 1; i < n - L + 1; i++)
        {
            j = i + L - 1;
            m[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++)
            {
                q = m[i][k] + m[k + 1][j] +  p[i - 1] * p[k] * p[j];
                if (q < m[i][j])
                    m[i][j] = q;
                    s[i][j] = k;
            }
        }
    }
    cout << "Optimal Parenthesization is : ";
    Optimal_Parens((int *)s, 1, n-1);
    cout << "\nOptimal Cost is : " << m[1][n-1] << endl;
}

int main()
{
    int i, n, size;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array is ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
    Matrix_Chain_Order_Optimal_Parens mco(n);
    mco.Matrix_Chain_Order(arr);
    return 0;
}
