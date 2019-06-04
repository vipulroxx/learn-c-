#include <iostream>
using namespace std;

double calculate(int chirps)
{
    double temperature = 0.0;
    temperature = (40.0 + chirps)/4;
    return temperature;
}
int main()
{
    int chirps;
    cout << "Number of chirps: ";
    cin >> chirps;
    cout << "The temperature is: " << calculate(chirps) << " degrees.";
}