#include<bits/stdc++.h>

using namespace std;

#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  node *left;
  node *right;
  node(int val)
  {
      data=val;
      left=NULL;
      right=NULL;
  }
};

void mirror(struct node *root)
{
    if(root==nullptr)
    {
        return;
    }
    else
    {
        mirror(root->left);
        mirror(root->right);
        node *temp=root->left;
        root->left=root->right;
        root->right=temp;
    }
}
void inorder(struct node *root)
{
    if(root==nullptr)
    {
        return;
    }
    else
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
int main()
{
     struct node *root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);
   // root->right->right = new node(3);
   // root->right->left=new node(1);
     
    cout << "Inorder traversal of the constructed tree is" << endl;
    inorder(root);
     
    /* Convert tree to its mirror */
    mirror(root);
     
    /* Print inorder traversal of the mirror tree */
    cout << "\nInorder traversal of the mirror tree"<<endl;
    inorder(root);
     
    return 0;
}