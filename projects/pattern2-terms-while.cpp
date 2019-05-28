#include <iostream>
using namespace std;
int main()
{
    int i = 1, k = 1;
    while (i <= 10)
    {
        cout << k+k << " ";
        k = k + 2;
        i++;
    }
}