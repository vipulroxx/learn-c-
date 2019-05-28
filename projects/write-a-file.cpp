#include <iostream>
#include <string.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main()
{
    fstream fp;
    char s[100], fname[20];
    cout << "Enter a filename with extension .txt to write to the file : ";
    gets(fname);
    if (!fp)
    {
        cout << "Error in opening the file!";
        exit(1);
    }
    cout << "Enter few lines of text : \n";
    while (strlen(gets(s)) > 0)
    {
        fp << s;
        fp << "\n";
    }
    fp.close();
}