#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    srand(1);
    int i;
    for (int i = 0; i < 20; i++)
    {
        cout << rand() << "\t";
    }
}