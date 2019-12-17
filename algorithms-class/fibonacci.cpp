#include <iostream>
using namespace std;

const int MAX_n = 100;
int f[MAX_n];

long fibonacci_recursion(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return (fibonacci_recursion(n - 1) + fibonacci_recursion(n - 2));
}

long fibonacci_caching(int n)
{
    if (f[n] == 1)
    {
        f[n] = f(n - 1) + f(n - 2);
    }
    return f[n];
}

long fibonacci_dynamicprogramming_1(int n)
{
    int i;
    long f[MAX_n + 1];
    f[0] = 0;
    f[1] = 1;
    for (i = 2; i <= n; i++)
    {
        f[i] =  f[i - 1] + f[i - 2];
    }
    return f[n];
}

long fibonacci_dynamicprogramming_2(int n)
{
    int prev1 = 0, prev2 = 0, next, i;
    for (i = 2; i <= n; i++)
    {
        next = prev1 + prev2;
        prev2 = prev1;
        prev1 = next;
    }
    return next;
}

int main()
{
    cout << "Fibonacci using recursion : ";
    for (int i = 0; i <= 20; i++)
    {
        cout << fibonacci_recursion(i) << " ";
    }
    cout << endl;
    int n = 20;
    cout << "Fibonacci using caching : ";
    cout << " " << fibonacci_caching(n) << " ";
    cout << endl;
}2