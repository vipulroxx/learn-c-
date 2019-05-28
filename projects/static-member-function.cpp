#include <iostream>
using namespace std;
class test
{
    int code;
    static int count;
    public:
    void setcode()
    {
        code =  ++count;
    }
    void showcode()
    {
        cout << "Object Number : " << code << "\n";
    }
    static void showcount()
    {
        cout << "Count : " << count << "\n";
    }
};
int test::count;
int main()
{
    test ob1,ob2;
    ob1.setcode();
    ob2.setcode();
    test::showcount();
    test ob3;
    ob3.setcode();
    test::showcount();
    ob1.showcode();
    ob2.showcode();
    ob3.showcode();
}