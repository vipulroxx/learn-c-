#include <iostream>
using namespace std;
int main()
{
    int i = 1, sum = 0, n;
    cout << "Enter any 10 natural numbers : "<< "\n";
    while (i<=10)
    {
        cin >> n;
        sum = sum +n;
        i++;
    }
    cout << "Sum of the 10 numbers = "<<sum;
}