#include <iostream>
using namespace std;
int main()
{
    int i, sn, lb = 0, ub = 9, middle, k = 0;
    int m[10];
    cout << "Enter any 10 numbers of an array M in ascending order :" << "\n";
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
    while (lb <= ub)
    {
        middle = (ub + lb)/2;
        if (m[middle] < sn)
        {
            lb = middle + 1;
        }
        else if (m[middle] == sn)
        {
            cout << sn << " found at location " << middle + 1 << "\n";
            break;
        }
        else
        {
            ub = middle - 1;
        }
        if (lb > ub)
        {
            cout << "Not found! " << sn << " is not present in the list.";
        }
    }
}