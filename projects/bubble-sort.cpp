#include <iostream>
using namespace std;
int main()
{
    int i , j, t;
    int m[10];
    cout << "Enter 10 numbers of an array M : ";
    for (i=0; i<10; i++)
    {
        cin >> m[i];
    }
    cout << "\nData before sorting : ";
    for (i=0; i<10; i++)
    {
        cout << m[i] << " ";
    }
    for (i=0; i<10; i++)
    {
        for (j=0; j<10-i; j++)
        {
            if (m[j] > m[j+1])
            {
                t = m[j];
                m[j] = m[j+1];
                m[j+1] = t;
            }
        }
    }
    cout << "\nData after bubble sorting : ";
    for (i=0; i<10; i++)
    {
        cout << m[i] << " ";
    }
}