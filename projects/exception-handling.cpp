#include <iostream>
using namespace std;
int main()
{
    int a, b, x;
    cout << "Enter values of a and b : ";
    cin >> a >> b;
    x = a - b;
    try
    {
        {
            if (x!=0)
            {
                cout << "Result (a/x) = " << a/x << "\n";
            }
            else
            {
                throw(x);
            }
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    cout << "END";
}