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
        for (j=i+1; j<11; j++)
        {
            if (m[i] > m[j])
            {
                t = m[i];
                m[i] = m[j];
                m[j] = t;
            }
        }
    }
    cout << "\nData after selection sorting : ";
    for (i=0; i<10; i++)
    {
        cout << m[i] << " ";
    }
}