#include <iostream>
#include <stdlib.h>
using namespace std;
struct BSTNode
{
    int data;
    BSTNode* left;
    BSTNode* right;
};
BSTNode* FindMin(BSTNode* root)
{
    while (root -> left != NULL)
        root = root -> left;
    return root;
}
BSTNode* Delete(BSTNode* root, int data)
{
	if (root == NULL)
        return root;
	else if (data < root -> data)
        root -> left = Delete(root -> left,data);
	else if (data > root->data)
        root -> right = Delete(root -> right,data);
	else
    {
		if (root -> left == NULL && root -> right == NULL)
        {
			delete root;
			root = NULL;
		}
		else if (root -> left == NULL)
        {
			BSTNode* temp = root;
			root = root -> right;
			delete temp;
		}
		else if (root -> right == NULL)
        {
			BSTNode* temp = root;
			root = root -> left;
			delete temp;
		}
		else
        {
			BSTNode* temp = FindMin(root -> right);
			root -> data = temp -> data;
			root -> right = Delete(root -> right, temp -> data);
		}
	}
	return root;
}
void InOrder(BSTNode* root)
{
    if (root == NULL)
        return;
    InOrder(root -> left);
    printf("%d ", root -> data);
    InOrder(root -> right);
}
BSTNode* GetNewNode(int data)
{
    BSTNode* newNode = new BSTNode();
    newNode -> data = data;
    newNode -> left = NULL;
    newNode -> right = NULL;
    return newNode;
}
BSTNode* Insert(BSTNode* root, int data)
{
    if (root == NULL)
    {
        root = GetNewNode(data);
    }
    else if (data <= root -> data)
    {
        root -> left = Insert(root -> left, data);
    }
    else
    {
        root -> right = Insert(root -> right, data);
    }
    return root;
}
bool Search(BSTNode* root, int data)
{
    if (root == NULL)
        return false;
    else if (root -> data == data)
        return true;
    else if (data <= root -> data)
        return Search(root -> left, data);
    else
        return Search(root -> right, data);
}
int main()
{
    int i, n, x;
    BSTNode* root = NULL;
    printf("Enter the amount of numbers you want to add to the binary search tree : ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("Enter the number : ");
        scanf("%d", &x);
        root = Insert(root, x);
    }
    InOrder(root);
    cout << "\n";
    int number, del;
    cout << "Enter a number to search in the binary search tree : ";
    cin >> number;
    if (Search(root, number) == true)
        cout << "Found!" << endl;
    else
        cout << "Not found!" << endl;
    InOrder(root);
    cout << "\n";
    cout << "Enter a number to delete in the binary search tree : ";
    cin >> del;
    root = Delete(root, del);
    InOrder(root);
    cout << "\n";
}