#include <iostream>

using namespace std;

class Base
{
    public:
    virtual void show() = 0;
    void abc()
    {
        cout << "ABC \n";

    }
};

class Derived: public Base
{
    public:
    void show()
    {
        cout << "Implementation of virtual function in Derived class \n";
    }
};

int main()
{
    Base *b;
    Derived d;
    b = &d;
    b -> abc();
    b -> show();
}