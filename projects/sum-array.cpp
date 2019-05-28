#include <iostream>
using namespace std;
int main()
{
    int m[10], sum = 0, j = 0;
    cout << "Enter 10 numbers for an array :" << "\n";
    for (int i=0; i<10; i++)
    {
        cin >> m[i];
    }
    cout << "The sum of 10 numbers for the array are : ";
    while (j <= 9)
    {
        sum = sum + m[j];
        j++;
    }
    cout << sum;
}