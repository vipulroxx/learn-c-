#include <iostream>
using namespace std;
int main()
{
    string str1 = "To be or not to be, that is the question";
    string str2 = "only ";
    string str3 = str1.substr(6,12);
    cout << str3 << endl;
    str1.insert(32,str2);
    cout << str1 << endl;
    str1.replace(str1.find("to be",0),5,"to jump");
    cout << str1 << endl;
    str1.erase(9,4);
    cout << str1 << endl;
    for (int i=0; i<str3.length(); i++)
    {
        cout << str3[i];
        cout << endl;
    }
}