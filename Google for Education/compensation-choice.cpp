#include <iostream>
using namespace std;

#define kPricePerUnit 225
#define kWeeklyWage 600
#define kSalary 7.0
#define kHoursPerWeek 40
#define kCommission2 0.10
#define kCommission3 0.2
#define kBonusPerUnit 20

int getInput()
{
    int units;
    cout << "Enter the number of units sold per week : ";
    if (!(cin >> units))
    {
        cout << "Please enter a number only.";
    }
    else
    {
        return units;
    }
    return 0;
}

void CalcMethod1()
{
    cout << "Method 1 : " << kWeeklyWage << endl;
}

void CalcMethod2(int Sales)
{
    double PerHour, TotalPay, Commission;
    PerHour = kHoursPerWeek * kSalary;
    Commission = kCommission2 * Sales * kPricePerUnit;
    TotalPay = PerHour + Commission;
    cout << "Method 2 : " << TotalPay << endl;
}

void CalcMethod3(int Sales)
{
    int Extra;
    double TotalPay, Commission;
    Commission = kCommission3 * Sales * kPricePerUnit;
    Extra = Sales * kBonusPerUnit;
    TotalPay = Commission + Extra;
    cout << "Method 3 : " << TotalPay << endl;
}

int main()
{
    int WeeklySales;
    WeeklySales = getInput();
    if (WeeklySales == 0)
    {
        return 0;
    }
    CalcMethod1();
    CalcMethod2(WeeklySales);
    CalcMethod3(WeeklySales);
}