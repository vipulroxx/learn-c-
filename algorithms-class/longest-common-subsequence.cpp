#include <iostream>
#include <string>
#include <vector>
using namespace std;

class longestCommonSubsequence
{
    public:
        int max(int a, int b);
        pair <int, vector <vector <string> > > LCS_Length(string X, string Y);
        void Print_LCS( vector <vector <string> > b, string x, int i, int j);
};

int longestCommonSubsequence::max(int a, int b)
{
    return ((a > b) ? a : b);
}

pair <int, vector <vector <string> > > longestCommonSubsequence::LCS_Length(string X, string Y)
{
    int m, n, i, j;
    m = X.size();
    n = Y.size();
    int c[m + 1][n + 1];
    vector <vector <string> > b(m + 1, vector <string>(n + 1, ""));
    for (i = 0; i <= m; i++)
        c[i][0] = 0;
    for (j = 0; j <= n; j++)
        c[0][j] = 0;
    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
            {
                c[i][j] = c[i - 1][j - 1] + 1;
                b[i][j] = "DIAG";
            }
            else
            {
                c[i][j] = max(c[i - 1][j], c[i][j - 1]);
                b[i][j] = (c[i][j] == c[i - 1][j]) ? "UP" : "LEFT";
            }
        }
    }
    return make_pair(c[m][n], b);
}

void longestCommonSubsequence::Print_LCS(vector <vector <string> > b, string x, int i, int j)
{
    if ((i == 0) || (j == 0))
        return;
    else if (b[i][j] == "DIAG")
    {
        Print_LCS(b, x, i - 1, j - 1);
        cout << x[i - 1] << " ";
    }
    else
    {
        if (b[i][j] == "UP")
        {
            Print_LCS(b, x, i - 1, j);
        }
        else
        {
            Print_LCS(b, x, i, j - 1);
        }
    }
    return;
}

int main()
{
    longestCommonSubsequence lcs;
    int i = 0, j = 0;
    string X,Y;
    cout << "Enter the sequence X: ";
    cin>>X;
    cout << endl;
    cout << "Enter the sequence Y: ";
    cin>>Y;

cout << endl;
cout<<"Sequence X: ";
    for (i = 0; i < X.size(); i++)
        cout << X[i] << " ";
cout<<"Sequence Y: ";
    for (j = 0; j < Y.size(); j++)
        cout << Y[j] << " ";
    cout << "Length of LCS is "<< lcs.LCS_Length(X, Y).first << endl;
    cout << "Size of X " << X.size() << endl;
    cout << "Size of Y " << Y.size() << endl;
    cout << "Longest Common Subsequence is ";
    lcs.Print_LCS(lcs.LCS_Length(X, Y).second, X, X.size(), Y.size());
    cout << endl;
}