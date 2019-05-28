#include <iostream>
using namespace std;
class sum
{
    int a, b, s;
    public:
    void getdata();
    void calculate();
    void display();
};
void sum::getdata()
{
    cout << "Enter any 2 numbers : ";
    cin >> a >> b;
}
void sum::calculate()
{
    s = a + b;
}
void sum::display()
{
    cout << "Sum value = " << s << "\n";
}
int main()
{
    sum ob;
    ob.getdata();
    ob.calculate();
    ob.display();
}