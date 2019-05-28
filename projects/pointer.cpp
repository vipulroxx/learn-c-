#include <iostream>
using namespace std;
void pointer1()
{
    int var = 20;
    int *p;
    p = &var;
    printf("Address of var variable = %d\n", &var);
    printf("Address stored in the p variable = %d\n", p);
    printf("Value of *p variable = %d\n", *p);
}
void pointer2()
{
    int a = 5;
    int *b;
    b  = &a;
    printf("Value of a is = %d\n", a);
    printf("Address of a is = %d\n", &a);
    printf("Value of a is = %d\n", *b);
    printf("Value of b is = %d\n", b);
}
int main()
{
    pointer1();
    pointer2();
}