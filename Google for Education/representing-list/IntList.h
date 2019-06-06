#include <iostream>
using namespace std;
class IntList
{
    public:
        IntList();
        IntList(int n, int v);
        void AddToEnd(int k);
        void Print(ostream &ouput) const;
        int Length() const;
    private:
        static const int SIZE = 100;
        int *Items;
        int numItems;
        int arraySize;
};