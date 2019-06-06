#include <iostream>
#include <algorithm>
#include "database.h"
using namespace std;

Database::Database()
{
    next_slot_ = 0;
}
Database::~Database()
{

}

void Database::AddComposer(string in_first_name, string in_last_name, string in_genre, int in_yob, string in_fact, int in_ranking)
{
    Composer composer;
    composer.set_first_name(in_first_name);
    composer.set_last_name(in_last_name);
    composer.set_composer_genre(in_genre);
    composer.set_fact(in_fact);
    composer.set_composer_yob(in_yob);
    composer.set_ranking(in_ranking);
    composers_[next_slot_] = composer;
    next_slot_++;
}
Composer* Database::GetComposer(string in_last_name)
{
    for (int i=0; i<next_slot_; i++)
    {
        if (composers_[i].last_name() == in_last_name)
        {
            return &composers_[i];
        }
    }
    return nullptr;
}
void Database::DisplayAll()
{
    for (int i=0; i<next_slot_; i++)
    {
        cout << "#" << i+1 << "\t" << composers_[i].first_name() << " " << composers_[i].last_name() << endl;
    }
}
bool CompareRank(const Composer& lhs, const Composer& rhs)
{
    return lhs.ranking() < rhs.ranking();
}
void Database::DisplayByRank()
{
    Composer copy[kMaxComposers];
    for (int i=0; i<next_slot_; i++)
    {
        copy[i] = composers_[i];
    }
    sort(copy, copy+next_slot_, CompareRank);
    for (int i=0; i<next_slot_; i++)
    {
        cout << "#" << i+1 << "\t" << copy[i].first_name() << " " << copy[i].last_name() << endl;
    }
}