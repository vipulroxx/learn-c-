#include <iostream>
using namespace std;
class integer
{
    int m, n;
    public:
    integer(int, int);
    void display()
    {
        cout << "M = " << m << "\n";
        cout << "N = " << n << "\n";
    }
};
integer::integer(int x, int y)
{
    m = x;
    n = y;
}
int main()
{
    integer ob1(0, 100);
    integer ob2 = integer(25, 75);
    cout << "\nObject 1 :" << "\n";
    ob1.display();
    cout << "\nObject 2 :" << "\n";
    ob2.display();
    return 0;
}