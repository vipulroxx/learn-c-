#include <iostream>
#include "IntList.h"
using namespace std;
int main()
{

    IntList intlist(5,10);
    intlist.AddToEnd(6);
    cout << "The length of the list is " << intlist.Length() << endl;
    intlist.Print(cout);
}