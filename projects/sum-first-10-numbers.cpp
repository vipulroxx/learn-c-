#include <iostream>
using namespace std;
int main()
{
    int i = 1, k = 0;
    while (i <= 10)
    {
        k  = k + i;
        i++;
    }
    cout << "Sum of first 10 numbers = " << k;
}