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
void InsertAtEnd(int data)
{
    Node* temp1 = new Node();
    temp1 -> data = data;
    temp1 -> next = NULL;
    if (head == NULL)
    {
        head = temp1;
    }
    else
    {
        Node* temp2 = new Node();
        temp2 = head;
        while (temp2 -> next != NULL)
        {
            temp2 = temp2 -> next;
        }
        temp2 -> next = temp1;
    }
}
int main()
{
    int i, n, x, pos;
    head = NULL;
    printf("Enter the amount of numbers you want to add to the linked list : ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &x);
        InsertAtEnd(x);
        Print();
    }
}