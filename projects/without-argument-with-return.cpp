#include <iostream>
using namespace std;
int sum()
{
    int a, b, s;
    cout << "Enter any two numbers : ";
    cin >> a >> b;
    s = a + b;
    return s;
}
int main()
{
    int s = sum();
    cout << "Sum value : " << s << "\n";
}