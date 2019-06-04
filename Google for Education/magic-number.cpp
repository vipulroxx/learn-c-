#include <iostream>
using namespace std;
int reverse(int n)
{
    int r= 0, p = 0;
    while (n!=0)
    {
        r = n%10;
        p = (p*10) + r;
        n = n/10;
    }
    return p;
}
int main()
{
    int n, subtract, subtract_reverse, magic_number;
    cout << "Enter 3 digit number : ";
    cin >> n;
    subtract = n - reverse(n);
    subtract_reverse = reverse(subtract);
    magic_number = subtract + subtract_reverse;
    cout << "Magic Number: " << magic_number;
}