#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void PrintRecurse(Node *p)
{
    if (p == NULL)
        return;
    PrintRecurse(p -> next);
    printf("%d ", p -> data);
}
Node* Insert(Node *head, int data)
{
    Node *temp1 = new Node();
    temp1 -> data = data;
    temp1 -> next = NULL;
    if (head == NULL)
    {
        head = temp1;
    }
    else
    {
        Node *temp2 = head;
        while (temp2 -> next != NULL)
        {
            temp2 = temp2 -> next;
        }
        temp2 -> next = temp1;
    }
    return head;
}
int main()
{
    int i, n, x, pos;
    Node *head = NULL;
    printf("Enter the amount of numbers you want to add to the linked list : ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &x);
        head = Insert(head, x);
    }
    printf("The list is ");
    PrintRecurse(head);
}