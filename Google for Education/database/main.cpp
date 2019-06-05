#include <iostream>
#include "database.h"
using namespace std;

string typeStr;
string typeInt;

int Menu()
{
    cout << endl;
    cout << "Composer Database" << endl;
    cout << "----------------------------------------------" << endl;
    cout << "1) Add a new composer" << endl;
    cout << "2} Retrieve a composer's data" << endl;
    cout << "3) Promote/Demote a composer's rank" << endl;
    cout << "4) List all composer's" << endl;
    cout << "5) List all composer's by rank" << endl;
    cout << "0) Quit" << endl;
    cout << "Enter choice: ";
    int choice;
    while (true)
    {
        if (!(cin >> choice) || (choice != 0 && choice != 1 && choice != 2 && choice != 3 && choice != 4 & choice != 5))
        {
            cout << "Please enter only the above choices!!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }
        break;
    }
    return choice;
}
template <class T>
T GetInput(T type, string str)
{
    T input;
    while (true)
    {
        cout << str;
        if (!(cin >> input))
        {
            cout << "Invalid input." << endl;
            cin.clear();
            cin.ignore(1000, 'n');
            continue;
        }
        break;
    }
    return input;
}
void AddComposer(Database &db)
{
    string first_name = "First name : \t";
    string last_name = "Last name: \t";
    string composer_genre = "Music genre: \t";
    string composer_fact = "Face: \t\t";
    int yob, ranking;
    cout << "Enter the following composer information" << endl;
    cout << endl;
    string first = GetInput(typeStr, first_name);
    string last = GetInput(typeStr, last_name);
    cin.ignore(1000, '\n');
    cin.clear();
    string genre;
    cout << composer_genre;
    getline(cin, genre);
    string fact;
    cout << composer_fact;
    getline(cin, fact);
    cout << "Birth year: \t";
    cin >> yob;
    cout << "Ranking: \t";
    cin >> ranking;
    db.AddComposer(first, last, genre, yob, fact, ranking);
}
Composer* FindComposer(Database &db)
{
    string str = "string";
    string prompt = "Enter composer's last name: ";
    string name = GetInput(str, prompt);
    cout << endl;
    Composer* comp = db.GetComposer(name);
    return comp;
}
void ChangeRank(Database &db)
{
    Composer* comp = FindComposer(db);
    if (comp == nullptr)
    {
        cout << "No composer with that name has been found!" << endl;
        cout << endl;
        return;
    }
    string first = comp -> first_name();
    string last = comp -> last_name();
    cout << "Composer " << first << " " << last << " has been found." << endl;
    cout << endl;
    cout << "Select one of the following: " << endl;
    cout << "1) Promote " << endl;
    cout << "2) Demote " << endl;
    cout << endl;
    int choice;
    cout << "Enter choice: ";
    cin >> choice;
    cout << endl;
    string str;
    str.append(string("Enter a value to ") + ((choice == 1) ? "promote" : "demote") + "by: ");
    cout << str;
    int value;
    cin >> value;
    cout << endl;
    if (choice == 1)
    {
        comp -> Promote(value);
    }
    else
    {
        comp -> Demote(value);
    }
    cout << first << " " << last << "'s new ranking is " << comp -> ranking() << endl;
}
void DisplayAll(Database &db)
{
    cout << "Composer Attributes" << endl;
    cout << endl;
    for (int i=0; i<db.next_slot_; i++)
    {
        cout << endl;
        db.composers_[i].Display();
        cout << endl;
    }
}
int main()
{
    Database db;
    while (true)
    {
        int choice = Menu();
        cout << endl;
        switch (choice)
        {
            case 0:
                cout << "Good-bye!" << endl;
                return 0;
            case 1:
                AddComposer(db);
                break;
            case 2:
                {
                    Composer* comp = FindComposer(db);
                    if (comp == nullptr)
                    {
                        cout << "No composer with that name has been found!" << endl;
                        break;
                    }
                    comp -> Display();
                    break;
                }
            case 3:
                ChangeRank(db);
                break;
            case 4:
                DisplayAll(db);
                break;
            case 5:
                db.DisplayByRank();
                break;
        }
    }
    return 0;
}