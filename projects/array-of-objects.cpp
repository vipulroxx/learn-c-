#include <iostream>
using namespace std;
class employee
{
    char name[30];
    float age;
    public:
    void getdata();
    void putdata();
};
void employee::getdata()
{
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter age : ";
    cin >> age;
}
void employee::putdata()
{
    cout << "Name : " << name << "\n";
    cout << "Age : " << age << "\n";
}
int main()
{
    int i, n;
    cout << "Enter the number of employees you want to put on the record : ";
    cin >> n;
    employee employee[n];
    for (i=0; i<n; i++)
    {
        cout << "\nDetalis of Employee " << i + 1 << " : " << "\n";
        employee[i].getdata();
    }
    cout << "\n";
    for (i=0; i<n; i++)
    {
        cout << "\nEmployee " << i + 1 << ":" <<"\n";
        employee[i].putdata();
    }
    return 0;
}