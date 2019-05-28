#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 3 numbers A, B and C respectively :" << "\n";
    cin >> a >> b >> c;
    if (a>b && a>c)
    {
        cout << "A is the greatest number." <<  "\n";
    }
    else if (b>a && b>c)
    {
        cout << "B is the greatest number." << "\n";
    }
    else
    {
        cout << "C is the greatest number." << "\n";
    }
}