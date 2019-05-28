#include <iostream>
using namespace std;
class item
{
    static int count;
    int number;
    public :
    void getdata(int a)
    {
        number = a;
        count++;
    }
    void getcount()
    {
        cout << "Count : " << count << "\n";
    }
};
int item::count;
int main()
{
    item ob1,ob2,ob3;
    ob1.getcount();
    ob2.getcount();
    ob3.getcount();
    ob1.getdata(100);
    ob2.getdata(200);
    ob3.getdata(300);
    cout << "After reading data : " << "\n";
    ob1.getcount();
    ob2.getcount();
    ob3.getcount();
}