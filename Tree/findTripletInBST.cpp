// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Node of the binary tree
struct node {
	int data;
	node* left;
	node* right;
	node(int data)
	{
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

// Function that returns true if a pair exists
// in the binary search tree with sum equal to x
bool existsPair(node* root, int x)
{
	// Iterators for BST
	stack<node *> it1, it2;

	// Initializing forward iterator
	node* c = root;
	while (c != NULL)
		it1.push(c), c = c->left;

	// Initializing backward iterator
	c = root;
	while (c != NULL)
		it2.push(c), c = c->right;
	// Two pointer technique
	while (it1.size() and it2.size()) {

		// Variables to store values at
		// it1 and it2
		int v1 = it1.top()->data, v2 = it2.top()->data;
    cout<<"v1 "<<v1<<" v2 "<<v2<<endl;
		// Base case
		if (v1 + v2 == x)
			return 1;

		if (v1 > v2)
			break;

		// Moving forward pointer
		if (v1 + v2 < x) {
      cout<<"v1 "<<v1<<" v2 "<<v2<<endl;
			c = it1.top()->right;
			it1.pop();
			while (c != NULL)
				it1.push(c), c = c->left;
		}
		// Moving backward pointer
		else {
      cout<<"v1 "<<v1<<" v2 "<<v2<<endl;
			c = it2.top()->left;
			it2.pop();
			while (c != NULL)
				it2.push(c), c = c->right;
		}
	}

	// Case when no pair is found
	return 0;
}

// Function that returns true if a triplet exists
// in the binary search tree with sum equal to x
bool existsTriplet(node* root, node* curr, int x)
{
	// If current node is NULL
	if (curr == NULL)
		return 0;

	// Conditions for existence of a triplet
	return (existsPair(root, x - curr->data)|| existsTriplet(root, curr->left, x)|| existsTriplet(root, curr->right, x));
}

// Driver code
int main()
{
	node* root = new node(5);
	root->left = new node(3);
	root->right = new node(7);
	root->left->left = new node(2);
	root->left->right = new node(4);
	root->right->left = new node(6);
	root->right->right = new node(8);

	int x = 15;

	if (existsTriplet(root, root, x))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
