#include <iostream>
using namespace std;
int main()
{
    cout << "Enter 3 angles of a triangle : " << "\n";
    int a, b, c, sum=0;
    cin >> a >> b >> c;
    sum = a+b+c;
    if (sum == 180)
    {
        cout << "The triangle is valid." << "\n";
    }
    else
    {
        cout << "The triangle is invalid." << "\n";
    }
}