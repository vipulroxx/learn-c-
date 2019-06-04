#include <iostream>
using namespace std;

string decode_month(const char month);
int decode_digit(const char day);
int decode_year(const char year);

int main()
{
    string in;
    cout << "Encoding: ";
    if (!(cin >> in))
    {
        cout << "Error in reading the the encoding!" << endl;
    }
    else
    {
        cout << "DD/MM/YYYY " << decode_digit(in.substr(2,1)[0]) << decode_digit(in.substr(1,1)[0]) << "/" << decode_month(in.substr(0,1)[0]) << "/" << decode_year(in.substr(3,1)[0]);
    }
}

int decode_year(const char year)
{
    return 64 - year + 1995;
}
int decode_digit(const char day)
{
    return day - 81;
}
string decode_month(char month)
{
    string decode;
    int base = month - 64;
    switch(base)
    {
        case 1:
            decode = "Jan";
            break;
        case 2:
            decode = "Feb";
            break;
        case 3:
            decode = "Mar";
            break;
        case 4:
            decode = "Apr";
            break;
        case 5:
            decode = "May";
            break;
        case 6:
            decode = "Jun";
            break;
        case 7:
            decode = "Jul";
            break;
        case 8:
            decode = "Aug";
            break;
        case 9:
            decode = "Sep";
            break;
        case 10:
            decode = "Oct";
            break;
        case 11:
            decode = "Nov";
            break;
        case 12:
            decode = "Dec";
            break;
        default:
            cout << "Error in month: " << decode << endl;
    }
    return decode;
}