#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
#include<cassert>
#include<iomanip>
using namespace std;

#define MAX 100
#define for(i,a,b) for(i=a;i<b; i++)

string cfg[MAX][MAX];
string dpr[MAX];
int p, num_productions;

inline string concat_terminal(string x, string y)
{
    int i;
    string a = x;
    for(i , 0, y.length())
        if(a.find(y[i]) > a.length())
            a += y[i];
    return (a);
}
 
inline void break_rhs_grammar(string a)
{
    int i;
    p = 0;
    while(a.length())
    {
        i = a.find("|");
        if(i > a.length())
        {
            dpr[p++] = a;
            a = "";
        }
        else
        {
            dpr[p++] = a.substr(0,i);
            a = a.substr(i+1, a.length());
        }
    }
}

inline int lhs_chomsky_CNF(string a)
{
    if(a.length()==1 && a[0]>='A' && a[0]<='Z')
        return 1;
    return 0;
}
 
inline int rhs_chomsky_CNF(string a)
{
    if (a.length() == 1 && a[0]>='a' && a[0] <='z')
        return 1;
    if (a.length()==2 && a[0]>='A' && a[0]<='Z' && a[1]>='A' && a[1]<='Z' )
        return 1;
    return 0;
}
 
inline string concat_search_prod(string p)
{
    int j,k;
    string r="";
    for(j,0,num_productions)
    {
        k=1;
        while(cfg[j][k] != "")
        {
            if(cfg[j][k] == p)
            {
                r=concat_terminal(r,cfg[j][0]);
            }
            k++;
        }
    }
    return r;
}

inline string genrate_combination(string a, string b)
{
    int i, j;
    string pri = a,re = "";
    for(i,0, a.length())
        for(j, 0, b.length())
        {
            pri = "";
            pri = pri + a[i] + b[j];
            re = re + concat_search_prod(pri);
        }
    return re;
}

int main()
{
    int i, pt, j, l, k;
    string a, str, r, pr, start;
    cout << "\nEnter the start Variable ";
    cin >> start;
    cout << "\nNumber of productions ";
    cin >> num_productions;
    for(i, 0, num_productions)
    {
        cin >> a;
        pt = a.find("->");
        cfg[i][0] = a.substr(0, pt);
        if (lhs_chomsky_CNF(cfg[i][0]) == 0)
        {
            cout << "\nGrammar not in Chomsky Form";
            abort();
        }
        a = a.substr(pt + 2, a.length());
        break_rhs_grammar(a);
        for(j, 0, p)
        {
            cfg[i][j+1] = dpr[j];
            if (rhs_chomsky_CNF(dpr[j]) == 0)
            {
                cout << "\nGrammar not in Chomsky Form";
                abort();
            }
        }
    }
    string matrix[MAX][MAX], st;
    cout << "\nEnter string to be checked : ";
    cin >> str;
    for(i, 0, str.length())
    {
        r = "";
        st = "";
        st += str[i];
        for(j, 0, num_productions)
        {
            k = 1;
            while(cfg[j][k] != "")
            {
                if(cfg[j][k] == st)
                {
                    r = concat_terminal(r, cfg[j][0]);
                }
                k++;
            }
        }
        matrix[i][i] = r;
    }
    int ii,kk;
    for(k, 1, str.length())
    {
        for(j, k, str.length())
        {
            r = "";
            for(l, j-k, j)
            {
                pr = genrate_combination(matrix[j-k][l], matrix[l+1][j]);
                r = concat_terminal(r, pr);
            }
            matrix[j-k][j] = r;
        }
    }
 
    for(i, 0, str.length())
    {
        k = 0;
        l = str.length()-i-1;
        for(j,l,str.length())
        {
            cout << setw(5)<<matrix[k++][j]<<" ";
        }
        cout << endl;
    }
    int f=0;
    for(i, 0, start.length())
        if(matrix[0][str.length()-1].find(start[i]) <= matrix[0][str.length()-1].length())
        {
            cout << "String can be generated\n";
            return 0;
        }
    cout << "String cannot be generated\n";
    return 0;
}