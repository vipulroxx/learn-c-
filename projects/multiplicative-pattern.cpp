#include <iostream>
using namespace std;
int main()
{
    double i, s = 0, p = 1;
    for (i=1; i<=5; i++)
    {
        p = p*i;
        s = s+p;
    }
    cout << "1+(1+2)+(1+2+3)+(1+2+3+4)+(1+2+3+4+5) = "<<s<<"\n";
}