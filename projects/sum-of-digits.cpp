#include <iostream>
using namespace std;
int sumOfDigits(int num)
{
    int rem, sum = 0;
    while (num!=0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    return sum;
}
int main()
{
    int num;
    cout << "Enter any number to find sum of its digits : ";
    cin >> num;
    cout << "Sum of digits of the number " << num << " is " << sumOfDigits(num) << "." <<"\n";
}