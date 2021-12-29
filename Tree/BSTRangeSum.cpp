#include<bits/stdc++.h>
using namespace std;

class TreeNode{
public:
    TreeNode *left;
    TreeNode *right;
    int data;
    TreeNode(int val)
    {
        left=NULL;
        right=NULL;
        data=val;
    }
};

int sum=0;
int rangeSumBST(TreeNode *root,int low,int high)
{
    if(root==NULL) return 0;

    queue<TreeNode *>q;
    q.push(root);
    while(!q.empty())
    {
        TreeNode *curr=q.front();
        q.pop();

        if(curr->data>=low && curr->data<=high)
        {
            sum+=curr->data;
            cout<<"sum = "<<sum<<" curr value = "<<curr->data<<" low= "<<low<<" high= "<<high;
        }

        if(curr->left!= NULL && curr->data >low )
            q.push(curr->left);

        if(curr->right!= NULL && curr->data < high)
            q.push(curr->right);
    }
    return sum;
}

int main()
{
    TreeNode *root=new TreeNode(10);
    root->left=new TreeNode(5);
    root->right=new TreeNode(15);
    root->left->left=new TreeNode(3);
    root->left->right=new TreeNode(7);
     root->right->right=new TreeNode(18);
     int l=7,r=15;
     int ans=rangeSumBST(root,l,r);
     cout<<"sum of l & r"<<ans<<endl;
     return 0;
}