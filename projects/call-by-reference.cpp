#include <iostream>
using namespace std;
int fact(int *x)
{
    int i, f = 1;
    for (i=1; i<=(*x); i++)
    {
        f = f*i;
    }
    return f;
}
int main()
{
    int fact(int x);
    int n, ft;
    int *p;
    cout << "Enter any number : ";
    cin >> n;
    p = &n;
    ft = fact(*p);
    cout << "Factorial value = " << ft;
}