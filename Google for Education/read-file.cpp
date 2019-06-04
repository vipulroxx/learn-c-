#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char file_name[30];
    string line;
    cout << "Enter filename : ";
    cin  >> file_name;
    ifstream People(file_name);
    while (getline(People,line))
    {
        cout << "line : " << line << endl;
    }
    return 0;
}