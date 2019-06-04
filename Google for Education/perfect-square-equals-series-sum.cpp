#include <iostream>
using namespace std;

long sum_of_integers(long x)
{
    return (x * (x + 1)) / 2;
}
bool sum_of_integers_exist(long squared)
{
    for (long i=0; i<squared; i++)
    {
        if (sum_of_integers(i) == squared)
        {
            cout << "Sum of integers 1 through " << i << " = " << squared << endl;
            return true;
        }
    }
    return false;
}
int main()
{
    long squared = 0;
    for (int i=37; i<5000; i++)
    {
        squared = i * i;
        if (sum_of_integers_exist(squared))
        {
            cout << i << " * " << i << " = " << squared << endl;
            break;
        }
    }
}