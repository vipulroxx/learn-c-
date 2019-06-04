#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char first_name[20], last_name[20];
    int age;
    char file_name[20];
    cout << "Enter first name : ";
    cin >> first_name;
    cout << "Enter last name : ";
    cin >> last_name;
    cout << "Enter age : ";
    cin >> age;
    cout << endl << "Enter the name of the file : ";
    cin >> file_name;
    ofstream People(file_name , ios::out);
    People << first_name << endl << last_name << endl << age << endl;
    return 0;
}
