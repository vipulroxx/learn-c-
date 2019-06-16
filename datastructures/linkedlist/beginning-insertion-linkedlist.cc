#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
struct Node* head;
void Insert(int x)
{
    Node* temp = new Node();
    temp -> data = x;
    temp -> next = NULL;
    temp -> next = head;
    head = temp;
}
void Print()
{
    Node* temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        printf(" %d", temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}
int main ()
{
    int n, i, x;
    head = NULL;
    printf("Enter the amount of numbers you want to add to the linked list : ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &x);
        Insert(x);
        Print();
    }
}
