#include <iostream>
using namespace std;
int main()
{
    int i, min, max;
    int m[10];
    cout << "Enter 10 elements of the array M :" << "\n";
    for (i=0; i<10; i++)
    {
        cin >> m[i];
    }
    cout << "Array elements of M are : ";
    for (i = 0; i<10; i++)
    {
        cout << m[i] << " ";
    }
    min = m[0];
    for (i=0; i<10; i++)
    {
        if (min > m[i])
        {
            min = m[i];
        }
    }
    cout << "\nThe lowest number is " << min << ".\n";
    max = m[0];
    for (i=0; i<10; i++)
    {
        if (max < m[i])
        {
            max = m[i];
        }
    }
    cout << "The greatest number is " << max << ".\n";
}