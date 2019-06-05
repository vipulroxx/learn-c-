#include <iostream>
#include "composer.h"
using namespace std;

const string ds = "Unkown";
const int di = 0;

Composer::Composer() : first_name_(ds), last_name_(ds), composer_genre_(ds), fact_(ds), composer_yob_(di), ranking_(kDefaultRanking)
{

}
Composer::~Composer()
{

}
void Composer::set_first_name(string in_first_name)
{
    first_name_ = in_first_name;
}
string Composer::first_name()
{
    return first_name_;
}
void Composer::set_last_name(string in_last_name)
{
    last_name_ = in_last_name;
}
string Composer::last_name()
{
    return last_name_;
}
void Composer::set_composer_yob(int in_composer_yob)
{
    composer_yob_ = in_composer_yob;
}
int Composer::composer_yob()
{
    return composer_yob_;
}
void Composer::set_composer_genre(string in_composer_genre)
{
    composer_genre_ = in_composer_genre;
}
string Composer::in_composer_genre()
{
    return composer_genre_;
}
void Composer::set_ranking(int in_ranking)
{
    ranking_ = in_ranking;
}
int Composer::ranking()
{
    return ranking_;
}
void Composer::set_fact(string in_fact)
{
    fact_ = in_fact;
}
string Composer::fact()
{
    return fact_;
}
void Composer::Promote(int increment)
{
    if ((ranking_ - increment) < 1)
    {
        cout << "Cannot promote any higher, currently rank 1." << endl;
        cout << endl;
        return;
    }
    else
    {
        {
            ranking_ -=  increment;
        }
    }
}
void Composer::Demote(int decrement)
{
    if ((ranking_ + decrement) > 100)
    {
        cout << "Cannot demote any lower, currently rank 100." << endl;
        cout << endl;
        return;
    }
    else
    {
        {
            ranking_ +=  decrement;
        }
    }
}
void Composer::Display()
{
    cout << "First name: \t" << first_name_ << endl;
    cout << "Last name: \t" << last_name_ << endl;
    cout << "Year of birth: \t" << first_name_ << endl;
    cout << "Genre: \t" << first_name_ << endl;
    cout << "Fact: \t" << first_name_ << endl;
    cout << "Ranking: \t" << first_name_ << endl;
}
