#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data=val;
        left=right=NULL;
    }
};

void printVector(const vector<int>&v,int i)
{
    for (int j = i; j < v.size(); j++)
        cout << v[j] << " ";
    cout << endl;
}
void printPathKUtil(Node *root,vector<int>&path,int sum)
{
    if(root==NULL)
    {
        return;
    }
    path.push_back(root->data);
    printPathKUtil(root->left,path,sum);
    printPathKUtil(root->right,path,sum);
    int k=0;
    for(int i=path.size()-1;i>=0;i--)
    {
        k+=path[i];
        if(k==sum)
        {
            printVector(path,i);
        }
    }
    path.pop_back();
}
void KPathSum(Node *root,int k)
{
    vector<int>rv;
    printPathKUtil(root,rv,k);
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(3);
    root->left->left = new Node(2);
    root->left->right = new Node(1);
    root->left->right->left = new Node(1);
    root->right = new Node(-1);
    root->right->left = new Node(4);
    root->right->left->left = new Node(1);
    root->right->left->right = new Node(2);
    root->right->right = new Node(5);
    root->right->right->right = new Node(2);
 
    int k = 5;
    KPathSum(root, k);
 
    return 0;
}