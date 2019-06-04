#include <iostream>
using namespace std;

int main()
{
    int a, b, c, abc, bca, cab, x, y, z, ar1, ar2, ar3, result_A, result_B, result_C;
    cout <<  "Enter 1st digit: ";
    cin >> a;
    cout <<  "Enter 2nd digit: ";
    cin >> b;
    cout <<  "Enter 3rd digit: ";
    cin >> c;
    abc = (a*100) + (b*10) + c;
    bca = (b*100) + (c*10) + a;
    cab = (c*100) + (a*10) + b;
    x = abc/11;
    y = bca/11;
    z = cab/11;
    ar1 = x + y;
    ar2 = y + z;
    ar3 = z + x;
    if (ar1 % 2 != 0)
    {
        if ((ar1 + 11) < 20)
        {
            ar1 += 11;
        }
        else
        {
            ar1 += -11;
        }
        if (ar1 == 9)
        {
            cout << "X + Y is " << ar1 << endl;
        }
    }
    if (ar2 % 2 != 0)
    {
        if ((ar2 + 11) < 20)
        {
            ar2 += 11;
        }
        else
        {
            ar2 += -11;
        }
        if (ar2 == 9)
        {
            cout << "Y + Z is " << ar2 << endl;
        }
    }
    if (ar3 % 2 != 0)
    {
        if ((ar3 + 11) < 20)
        {
            ar3 += 11;
        }
        else
        {
            ar3 += -11;
        }
        if (ar3 == 9)
        {
            cout << "Z + X is " << ar3 << endl;
        }
    }
    result_A = ar1 / 2;
    result_B = ar2 / 2;
    result_C = ar3 / 2;
    cout << "A: " << result_A << " B: " << result_B << " C: " << result_C << endl;
    return 0;
}