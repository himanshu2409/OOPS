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
int sum(node *root)
{
    if(root==NULL)
    return 0;
    return sum(root->left)+sum(root->right)+root->data;
}
int isSumTree(node *root)
{
    if(root==NULL || (root->left==NULL && root->right== NULL))
    {
        return true;
    }
    int ls=sum(root->left);
    int rs=sum(root->right);
    int total=ls+rs;
    if(root->data==total)
    {
        if(isSumTree(root->left)&&isSumTree(root->right))
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
     struct node *root = new node(26);
    root->left = new node(10);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(6);
    root->right->right = new node(3);
   // root->right->left=new node(1);
     
    if (isSumTree(root))
        cout << "The given tree is a SumTree ";
    else
        cout << "The given tree is not a SumTree ";
 
    getchar();
    return 0;
}