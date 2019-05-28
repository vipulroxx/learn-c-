#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, sum = 0;
    cout << a << " " << b;
    for (int i=0; i<10; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
        cout << " " << sum;
    }
}