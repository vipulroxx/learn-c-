#include <iostream>
using namespace std;

string book_code;
double book_price, total_cost = 0.0;
int total_books, prospective_enrollment, usage, condition, books_to_order, done;
void GetInput();
void DisplayData();
double PercentSold();
int main()
{
    do
    {
        GetInput();
        DisplayData();
        cout << "\nEnter 1 to do another book, 0 to stop. ";
        cin >> done;
    }
    while (done != 0);
    cout << "******************************************************" << endl;
    cout << "Total for all orders: $" << total_cost << endl;
    cout <<"Profit: $" << total_cost * 0.2 << endl;
    cout << "******************************************************" << endl;
    return 0;
}
double PercentSold(int usage, int condition)
{
    if (usage == 1)
        return (condition == 1 ? 0.9 * prospective_enrollment : 0.65 * prospective_enrollment);
    else
        return (condition == 1 ? 0.4 * prospective_enrollment : 0.2 * prospective_enrollment);
}
void DisplayData()
{
    books_to_order = PercentSold(usage, condition) - total_books;
    total_cost += (book_price * books_to_order);
    cout << "******************************************************" << endl;
    cout << "Book: " << book_code << endl;
    cout << "Price: $" << book_price << endl;
    cout << "Inventory: " << total_books << endl;
    cout << "Enrollment: " << prospective_enrollment << endl << "\n";
    cout << (usage == 1 ? "The book is required " : "The book is optional ") << "and ";
    cout << (condition == 1 ? "new." : "used.") << endl;
    cout << "******************************************************" << endl;
    cout << "Need to order: " << books_to_order << endl;
    cout << "Total Cost: $" << total_cost << endl;
    cout << "******************************************************" << endl;
}
void GetInput()
{
    cout << "Please enter the book code: ";
    cin >> book_code;
    cout << "   single copy price: ";
    cin >> book_price;
    cout << "   number on hand: ";
    cin >> total_books;
    cout << "   prospective enrollment: ";
    cin >> prospective_enrollment;
    cout << "   1 for reqd/0 for optional: ";
    cin >> usage;
    cout << "   1 for new/0  for used: ";
    cin >> condition;
}