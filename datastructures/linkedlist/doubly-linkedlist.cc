#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    Node *prev;
    Node *next;
};
Node *head;
Node* GetNewNode(int x)
{
    Node *temp = new Node();
    temp -> data = x;
    temp -> prev = NULL;
    temp -> next = NULL;
    return temp;
}
void InsertAtHead(int x)
{
    Node *temp = GetNewNode(x);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    head -> prev = temp;
    temp -> next = head;
    head = temp;
}
void Print()
{
    Node *temp = head;
    printf("Forward: ");
    while (temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}
void ReversePrint()
{
    Node *temp = head;
    if (temp == NULL)
        return;
    while (temp -> next != NULL)
    {
        temp = temp -> next;
    }
    printf("Reverse: ");
    while (temp != NULL)
    {
        printf("%d ", temp -> data);
        temp = temp -> prev;
    }
    printf("\n");
}
int main()
{
    head = NULL;
    InsertAtHead(2);
    InsertAtHead(4);
    InsertAtHead(6);
    Print();
    ReversePrint();
}