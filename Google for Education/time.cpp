#include <iostream>
using namespace std;
int main()
{
    int seconds, minutes, hours;
    cout << "Number of seconds: ";
    cin >> seconds;
    minutes = (seconds/60)%60;
    hours = seconds/3600;
    seconds = seconds%60;
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;
}