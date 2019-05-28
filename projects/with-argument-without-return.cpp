#include <iostream>
using namespace std;
void sum(int x, int y)
{
    int z;
    z = x + y;
    cout << "Sum value : " << z << "\n";
}
int main()
{
    int a, b, s;
    void sum(int, int);
    cout << "Enter any two numbers : ";
    cin >> a >> b;
    sum(a, b);
}