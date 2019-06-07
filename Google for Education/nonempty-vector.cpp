#include <iostream>
#include <vector>
using namespace std;
vector <string> NonEmpty(vector <string> V)
{
    int num = 0;
    for (int k=0; k<V.size(); k++)
    {
        if (V[k] != "")
            num++;
    }
    vector<string> newV(num);
    int index = 0;
    for (int i=0; i<V.size(); i++)
    {
        if (V[i] != "")
        {
            newV[index] = V[i];
            index++;
        }
    }
    return newV;
}
int main()
{
    vector <string> V;
    vector <string> newV;
    V.push_back("hello");
    V.push_back("");
    V.push_back("bye");
    V.push_back("");
    V.push_back("");
    V.push_back("!");
    newV = NonEmpty(V);
    vector <string>::iterator it = newV.begin() + 1;
    newV.insert(it, "!");
    for (size_t n=0; n<newV.size(); n++)
        cout << newV[n] << endl;
    return 0;
}

