#include <iostream>
using namespace std;
class code
{
    int id;
    public:
    code()
    {

    }
    code(int a)
    {
        id = a;
    }
    code(code &x)
    {
        id = x.id;
    }
    void display()
    {
        cout << id;
    }
};
int main()
{
    code A(100);
    code B(A);
    code C = A;
    code D;
    D = A;
    cout  << "\nID of A : ";
    A.display();
    cout  << "\nID of B : ";
    B.display();
    cout  << "\nID of C : ";
    C.display();
    cout  << "\nID of D : ";
    D.display();
}