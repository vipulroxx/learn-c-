#include <iostream>
using namespace std;
int main()
{
    int m[10];
    cout << "Enter 10 numbers for an array :" << "\n";
    for (int i=0; i<10; i++)
    {
        cin >> m[i];
    }
    cout << "The 10 numbers for the array are :" << "\n";
    for (int j=0; j<10; j++)
    {
        cout << m[j] << " ";
    }
}