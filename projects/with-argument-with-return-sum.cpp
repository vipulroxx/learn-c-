#include <iostream>
using namespace std;
int sum(int x, int y)
{
    int z;
    z = x + y;
    return z;
}
int main()
{
    int a, b, s;
    int sum(int, int);
    cout << "Enter any two numbers : ";
    cin >> a >> b;
    s = sum(a, b);
    cout << "Sum value = " << s << "\n";
}