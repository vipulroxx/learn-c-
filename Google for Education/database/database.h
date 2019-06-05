#ifndef H_DATABASE
#define H_DATABASE

#include <iostream>
#include "composer.h"
using namespace std;
const int kMaxComposers = 100;

class Database
{
    public:
        Database();
        ~Database();
        void AddComposer(string in_first_name, string in_last_name, string in_genre, int in_yob, string in_fact, int in_ranking);
        Composer* GetComposer(string in_last_name);
        void DisplayAll();
        void DisplayByRank();
        Composer composers_[kMaxComposers];
        int next_slot_;
};
#endif