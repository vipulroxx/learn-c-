#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head;
Node* Reverse(Node* head)
{
    Node *current, *prev, *next;
    current = head;
    prev = NULL;
    while (current != NULL)
    {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}
void Print(Node* head)
{
    printf("The list is ");
    while (head != NULL)
    {
        printf(" %d", head -> data);
        head = head -> next;
    }
    printf("\n");
}
Node* Insert(Node* head, int data)
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
    return head;
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
        head = Insert(head, x);
    }
    Print(head);
    head = Reverse(head);
    Print(head);
}