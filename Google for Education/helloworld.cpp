#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout << setiosflags(ios::left);
    for (int i=0; i<6; i++)
    {
        for (int j = 0; j<4; j++)
        {
            cout << setw(17) << "Hello World";
        }
        cout << endl;
    }
}