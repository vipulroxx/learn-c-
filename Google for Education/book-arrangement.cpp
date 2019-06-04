#include <iostream>
using namespace std;
int main()
{
    int n,i,multiple=1;
    cout << "Enter the number of books you want to arrange : ";
    cin >> n;
    for (i=1; i<=n; i++)
    {
        multiple *= i;
    }
    cout << "The number of ways you can arrange " << n << " books, left to right, on a shelf = " << multiple << endl;
    return 0;
}