#include <iostream>
#include <vector>
using namespace std;

void Expand(vector <int> &V)
{
    V.resize(2*V.size());
}
int main()
{
    vector <int> v(1);
    for (int k=1; k<=16; k++)
    {
        if (v.size() < k)
        {
            cout << "vector size before calling Expand: " << v.size() << endl;
            Expand(v);
            cout << "vector size after calling Expand: " << v.size() << endl;
        }
        v[k-1] = k;
    }
    cout << "[ ";
    for (int k=0; k<v.size(); k++)
    {
        cout << v[k] << ' ';
    }
    cout << "]\n";
    return 0;
}