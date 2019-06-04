#include <iostream>
using namespace std;

void DoIt(int &foo, int goo)
{
    foo = goo + 3;
    cout << foo << endl;
    goo =foo + 4;
    cout << goo << endl;
    foo = goo + 3;
    cout << foo << endl;
    goo = foo;
    cout << goo << endl;
}
void Duplicate(int &a, int &b, int &c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}
int main()
{
    int *intptr;
    intptr = new int;
    *intptr = 5;
    *intptr += 1;
    cout << "Address of intptr variable is " << &intptr << " and its value is " << *intptr << endl;
    int *x;
    int *y;
    x = new int;
    y = new int;
    *x = 42;
    *y = 13;
    y = x;
    *y = 13;
    cout << *x << endl;;
    int my_int = 46;
    int *my_pointer = &my_int;
    cout << "*my_pointer: " << *my_pointer << endl;
    *my_pointer = 107;
    cout << "my_int: " << my_int <<endl;
    cout << "my_pointer: " << *my_pointer << endl;
    int *ptr1;
    ptr1 = new int;
    float *ptr2 = new float();
    delete ptr1;
    delete ptr2;
    int x1 = 1, y1 = 3, z1 = 7;
    Duplicate(x1, y1, z1);
    cout << "x=" << x1 <<", y=" << y1 << ", z=" << z1 << endl;
    int *foo, *goo;
    foo = new int;
    *foo = 1;
    goo = new int;
    *goo = 3;
    *foo = *goo + 3;
    cout << *foo << endl;
    foo = goo;
    cout << foo << endl;
    *goo = 5;
    *foo = *goo + *foo;
    cout << *foo << endl;
    DoIt(*foo, *goo);
    cout << (*foo) << endl;
    return 0;
}