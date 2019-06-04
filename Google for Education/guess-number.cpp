#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
int main()
{
    int random_number, guess;
    srand(time(NULL));
    random_number = rand() % 100 + 1;
    cout << "Guess a number from 1 to 100 : ";
    cin >> guess;
    do
    {
        if (!(cin >> guess))
        {
            cout << "Please enter numbers only." << endl;
        }
        else
        {
            if (random_number < guess)
            {
                cout << "The secret number is lower than " << guess << endl;
            }
            else if (random_number > guess)
            {
                cout << "The secret number is greater than " << guess << endl;
            }
        }
    }
    while (random_number != guess);
    cout << "Congratulations!" << endl;
    return 0;
}