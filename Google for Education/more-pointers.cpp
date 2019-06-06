#include <iostream>
using namespace std;
void Unknown(int *p, int num);
void HardToFollow(int *p, int q, int *num);

void Unknown(int *p, int num)
{
    cout << "*p: " << *p << endl;
    cout << "num: " << num << endl;
    int *q;
    cout << "*q: " << *q << endl;
    q = &num;
    cout << "&num: " << &num << endl;
    cout << "q: " << q << endl;
    cout << "*q: " << *q << endl;
    *p = *q + 2;
    cout << "*q: " << *q << endl;
    cout << "*p: " << *p << endl;
    num = 7;
    cout << "num: " << num << endl;
    cout << "nansa" << endl;
}

void HardToFollow(int *p, int q, int *num)
{
    cout << "*p: " << *p << endl;
    cout << "q: " << q << endl;
    cout << "*num: " << *num << endl;
    *p = q + *num;
    cout << "*p: " << *p << endl;
    *num = q;
    cout << "*num: " << *num << endl;
    num = p;
    cout << "p: " << p << endl;
    cout << "num: " << num << endl;
    cout << "*num: " << *num << endl;
    p = &q;
    cout << "&q: " << &q << endl;
    cout << "p: " << p << endl;
    cout << "*p: " << *p << endl;
    Unknown(num, *p);
}

int main()
{
    int *q;
    int trouble[3];

    trouble[0] = 1;
    q = &trouble[1];
    cout << "&trouble[1]: " << &trouble[1] << endl;
    cout << "q: " << q << endl;
    cout << "*q: " << *q << endl;
    *q = 2;
    cout << "*q: " << *q << endl;
    cout << "q: " << q << endl;
    trouble[2] = 3;

    HardToFollow(q, trouble[0], &trouble[2]);
    cout << "&trouble[0]: " << &trouble[0] << endl;
    cout << "*q: " << *q << endl;
    Unknown(&trouble[0], *q);

    cout << "*q: " << *q << " " << "trouble[0]: " << trouble[0] << " " << "trouble[2]: " << trouble[2] << endl;
}