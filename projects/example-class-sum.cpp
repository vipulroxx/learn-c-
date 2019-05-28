#include <iostream>
using namespace std;
class sum
{
    int a, b, s;
    public:
    void getdata()
    {
        cout << "Enter any 2 numbers : ";
        cin >> a >> b;
    }
    void calculate()
    {
        s = a + b;
    }
    void display()
    {
        cout << "Sum value = " << s << "\n";
    }
};
int main()
{
    sum ob;
    ob.getdata();
    ob.calculate();
    ob.display();
}