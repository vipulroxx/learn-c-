#include <iostream>
#include <stack>
using namespace std;

void showstack(stack <int> s)
{
    while (!s.empty())
    {
        cout << '\t' << s.top();
        s.pop();
    }
    cout << '\n';
}
int S[100];
int n = 100;
int top = -1;

void push(int val)
{
    if (top >= n - 1)
    {
        cout << "Stack Overflow!" << endl;
    }
    else
    {
        top++;
        S[top] = val;
    }
}

void pop()
{
    if (top <= -1)
    {
        cout << "Stack Underflow!" << endl;
    }
    else
    {
        cout << "The popped element is " << S[top] << endl;
        top--;
    }
}

void display()
{
    if (top >= 0)
    {
        cout << "The stack elements are : " << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << S[i] << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "Stack is empty.";
    }
}

int main()
{
    stack <int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << "Using stack library : " << endl;
    cout <<  "The stack is : ";
    showstack(s);
    cout << "s.size() : " << s.size() << endl;
    cout << "s.top() : " << s.top() << endl;
    cout << "After pop ";
    s.pop();
    cout << endl;
    cout <<  "The stack is : ";
    showstack(s);
    cout << "-----------------------" << endl;
    cout << "Using stack array : " << endl;
    int ch , val;
    cout << "1) Push in stack" << endl;
    cout << "2) Pop in stack" << endl;
    cout << "3) Display in stack" << endl;
    cout << "4) Exit" << endl;
    do
    {
        cout << "Enter choice : " << endl;
        cin >> ch;
        switch(ch)
        {
            case 1:
            {
                cout << "Enter value to be pushed : " << endl;
                cin >> val;
                push(val);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                cout << "Exit" << endl;
                break;
            }
            default:
            {
                cout << "Invalid choice" << endl;
            }
        }
    }
    while (ch != 4);
    {
        return 0;
    }
}