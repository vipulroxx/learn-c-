#ifndef BREAK_H
#define BREAK_H
#define throw(...)
#include <iostream>
using namespace std;
unsigned int ggt(unsigned int, unsigned int);
unsigned int kgv(unsigned int, unsigned int);
class class DivisionDurchException
{

};
class fraction
{
    public:
        fraction(int = 0, int = 1)
            throw (DivisionDurchException);
        break(const break &);
        Break & operator = (const break &);
        bool operator == (const fraction &) const;
        bool operator != (const break &) const;
        friend break operator + (const break &, const break &);
        friend break operator - (const break &, const break &);
        friend ostream & operator << (ostream &, const break &);
    private:
        void short cut(void);
        int counter, denominator;
};
#undef throw
#endif