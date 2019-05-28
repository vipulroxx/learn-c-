#include <iostream>
using namespace std;

int main()
{
    int l, b, p = 0, a = 0;
    cout << "Enter length and breadth of a rectangle :" << "\n";
    cin >>l >> b;
    p = 2*l + 2*b;
    a = l * b;
    if (a > p)
    {
        cout << "Area is greater than the perimeter." << "\n";
    }
    else
    {
        cout << "Perimeter is greater than the area." << "\n";
    }
}