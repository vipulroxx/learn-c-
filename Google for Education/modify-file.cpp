#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char first_name[20], last_name[20];
    int age;
    char file_name[20];
    char done;
    cout << endl << "Enter the name of the file : ";
    cin >> file_name;
    ofstream People(file_name,ios::out);
    while (done != 'n')
    {
        cout << "Enter first name : ";
        cin >> first_name;
        cout << "Enter last name : ";
        cin >> last_name;
        cout << "Enter age : ";
        cin >> age;
        People << first_name << endl << last_name << endl << age << endl;
        cout << "Continue y/n" << endl;
        cin >> done;
    }
    People.close();
    ifstream People_in(file_name);
    while(1)
    {
        People_in >> first_name >> last_name >> age;
        if(People_in.eof())
        {
            break;
        }
        cout << "First name : " << first_name << endl;
        cout << "Last name : " << last_name << endl;
        cout << "Age : " << age << endl;
    }
    People_in.close();
    return 0;
}