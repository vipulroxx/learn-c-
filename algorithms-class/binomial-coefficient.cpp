#include <iostream>
using namespace std;

class binomialCoefficient
{
    public:
        int min(int a, int b);
        int binomialCoefficient_Recursion(int n, int k);
        int binomialCoefficient_DP(int n, int k);
};

int binomialCoefficient::min(int a, int b)
{
    return (a < b) ? a : b;
}

int binomialCoefficient::binomialCoefficient_Recursion(int n, int k)
{
    if ((k == 0) || (k == n))
    {
        return 1;
    }
    return ((binomialCoefficient_Recursion(n - 1, k - 1)) + (binomialCoefficient_Recursion(n - 1, k)));
}

int binomialCoefficient::binomialCoefficient_DP(int n, int k)
{
    int x[n + 1][k + 1];
    int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= min(i, k); j++)
        {
            if ((j == 0) || (j == i))
            {
                x[i][j] = 1;
            }
            else
            {
                x[i][j] = x[i - 1][j - 1] + x[i - 1][j];
            }
        }
    }
    return x[n][k];
}

int main()
{
    int n, k, rec, dp;
    binomialCoefficient bs;
    cout << "Enter n value : ";
    cin >> n;
    cout << "Enter k value : ";
    cin >> k;
    rec = bs.binomialCoefficient_Recursion(n, k);
    cout << "Value of X[" << n << "][" << k << "] using recursion is " << rec << endl;
    dp = bs.binomialCoefficient_DP(n, k);
    cout << "Value of X[" << n << "][" << k << "] using dynamic programming is " << dp << endl;
}