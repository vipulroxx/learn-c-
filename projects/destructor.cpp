#include <iostream>
using namespace std;

class alpha
{
    static int count;
    public:
    alpha()
    {
        count++;
        cout << "\nObject created : " << count;
    }
    ~alpha()
    {
        cout << "\nObject destroyed : " << count;
        count--;
    }
};
int alpha::count=0;
int main()
{
    cout<<"ENTER MAIN \n";
    alpha ob1, ob2, ob3, ob4;
    {
        cout <<"\nENTER BLOCK 1 \n";
        alpha ob5;
    }
    {
        cout <<"\nENTER BLOCK 2 \n";
        alpha ob6;
    }
    cout << "\nRE-ENTER MAIN \n";
}