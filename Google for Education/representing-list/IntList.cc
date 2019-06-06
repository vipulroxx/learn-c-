#include <iostream>
#include "IntList.h"
using namespace std;
IntList::IntList(): Items(new int[SIZE]), numItems(0), arraySize(100)
{

}
IntList::IntList(int n, int v): Items(new int[SIZE]), numItems(0), arraySize(100)
{
    for (int i=0; i<n; i++)
        AddToEnd(v);
}
void IntList::AddToEnd(int k)
{
    Items[numItems + 1] = k;
}
void IntList::Print(ostream &output) const
{
    for (int i=0; i<numItems; i++)
        cout << Items[i] << " ";
    cout << endl;
}
int IntList::Length() const
{
    return numItems;
}