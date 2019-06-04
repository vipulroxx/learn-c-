#include <iostream>
using namespace std;
double calculate(double score1, double score2, double score3, double score4, double score5, double score6, double score7)
{
    double average,grade;
    average = (score1+score2+score3+score4)/4;
    grade = (0.4*average)+(0.15*score5)+(0.35*score6)+(0.1*score7);
    return grade;
}
int main()
{
    double score1, score2, score3, score4, score5, score6, score7;
    cout << "Enter the score for the first assignment: ";
    cin >> score1;
    cout << "Enter the score for the second assignment: ";
    cin >> score2;
    cout << "Enter the score for the third assignment: ";
    cin >> score3;
    cout << "Enter the score for the fourth assignment: ";
    cin >> score4;
    cout << "Enter the score for the midterm: ";
    cin >> score5;
    cout << "Enter the score for the final: ";
    cin >> score6;
    cout << "Enter the score for the section grade: ";
    cin >> score7;
    cout << "The final grade is: " << calculate(score1,score2,score3,score4,score5,score6,score7);
}