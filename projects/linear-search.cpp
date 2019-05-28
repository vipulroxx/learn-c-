#include <iostream>
using namespace std;
int main()
{
    int i, k = 0, sn;
    int m[10];
    cout << "Enter any 10 numbers of an array M :" << "\n";
    for (i=0; i<10; i++)
    {
        cin >> m[i];
    }
    cout << "\nThe numbers of array M are : ";
    for (i=0; i<10; i++)
    {
        cout << m[i] << " ";
    }
    cout << "\nEnter the number to search in the array : ";
    cin >> sn;
    for (i=0; i<10; i++)
    {
        if (m[i] == sn)
        {
            k = 1;
            break;
        }
    }
    if (k == 1)
    {
        cout << "\nThe number " << sn << " is present.\n";
    }
    else
    {
        cout << "\nThe number " << sn << " is not present.\n";
    }
}