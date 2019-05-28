#include <iostream>
using namespace std;
int main()
{
    int i, j, temp;
    int m[10];
    cout << "Enter 10 elements of the array M :" << "\n";
    for (i=0; i<10; i++)
    {
        cin >> m[i];
    }
    cout << "Array elements of M before reversing are : ";
    for (i = 0; i<10; i++)
    {
        cout << m[i] << " ";
    }
    cout << "\nArray elements of M after reversing are : ";
    j = i-1;
    i = 0;
    while(i < j)
	{
		temp = m[i];
		m[i] = m[j];
		m[j] = temp;
		i++;
		j--;
	}
    for (int j=0; j<10; j++)
    {
        cout << m[j] << " ";
    }
}