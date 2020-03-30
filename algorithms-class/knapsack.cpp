#include <iostream>

using namespace std;

void knapsack(int sizeArray, int size, int w[sizeArray], int v[sizeArray])
{
    int i, j, dp[sizeArray + 1][size + 1];
    for (i = 0 ; i <= size; i++)
        dp[0][i] = 0;
    for (i = 1; i <= sizeArray; i++)
    {
        for (j = 0; j <= size; j++)
        {
            if (j < w[i - 1])
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max((v[i-1] + dp[i-1][j - w[i-1]]), (dp[i - 1][j]));
        }
    }
    cout << dp[sizeArray][size] << endl;
}
int main()
{
    int i, sizeArray, size;
    cout << "Enter the size of the array w : ";
    cin >> sizeArray;
    cout << "Enter the capacity of the bag : ";
    cin >> size;
    int w[sizeArray], v[sizeArray];
    cout << "Enter value of array w : ";
    for (i = 0; i < sizeArray; i++)
        cin >> w[i];
        cout << "Enter cost for array w : ";
    for (i = 0; i < sizeArray; i++)
        cin >> v[i];
    knapsack(sizeArray, size, w, v);
}