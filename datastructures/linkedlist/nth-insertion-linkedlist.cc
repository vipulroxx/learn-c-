#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
Node* head;
void Print()
{
    Node* temp = head;
    printf("The list is ");
    while (temp != NULL)
    {
        printf(" %d", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}
void Insert(int data, int n)
{
    Node* temp1 = new Node();
    temp1 -> data = data;
    temp1 -> next = NULL;
    if (n==1)
    {
        temp1 -> next = head;
        head = temp1;
        return;
    }
    Node* temp2 = head;
    for (int i=0; i<n-2; i++)
    {
        temp2 = temp2 -> next;
    }
    temp1 -> next = temp2 -> next;
    temp2 -> next = temp1;
}
int main()
{
    int i, n, x, y;
    head = NULL;
    printf("Enter the amount numbers you want to add to the linked list : ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &x);
        printf("Enter the position where you want the number to be inserted : ");
        scanf("%d", &y);
        Insert(x, y);
        Print();
    }
}