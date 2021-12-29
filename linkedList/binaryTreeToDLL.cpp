#include<bits/stdc++.h>
using namespace std;

struct Node{
public:
    int data;
    Node *left;
    Node *right;
};

void binaryTreeToDLL(Node *root,Node **head)
{
    if(root==NULL)
    {
        return;
    }
    static Node *prev=NULL;
    binaryTreeToDLL(root->left,head);  //1
    if(prev==NULL)
    {
        *head=root;
    }
    else
    {
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    binaryTreeToDLL(root->right,head);
}
Node* newNode(int data)
{
    Node* new_Node = new Node;
    new_Node->data = data;
    new_Node->left = new_Node->right = NULL;
    return (new_Node);
}
 
/* Function to print Nodes in a given doubly linked list */
void printList(Node *Node)
{
    while (Node!=NULL)
    {
        cout << Node->data << " ";
        Node = Node->right;
    }
}
 
/* Driver program to test above functions*/
int main()
{
    // Let us create the tree shown in above diagram
    Node *root        = newNode(10);
    root->left        = newNode(12);
    root->right       = newNode(15);
    root->left->left  = newNode(25);
    root->left->right = newNode(30);
    root->right->left = newNode(36);
 
    // Convert to DLL
    Node *head = NULL;
    binaryTreeToDLL(root, &head);
 
    // Print the converted list
    printList(head);
 
    return 0;
}