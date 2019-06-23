#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node *left,*right;
};

int height(node *root)
{
	if(root==NULL) return 0;
	return max(height(root->left),height(root->right)) + 1;
}

int main()
{
	node *root;
	root = new node();
	root->data = 5;
	
	node *temp;
	temp = new node();
	temp->data = 15;
	root->left = temp;
	
	node *temp1;
	temp1 = new node();
	temp1->data = 25;
	root->right = temp1;
	
	node *temp2;
	temp2 = new node();
	temp2->data = 35;
	temp->left = temp2;
	
	node *temp3;
	temp3 = new node();
	temp3->data = 45;
	temp1->right = temp3;
	
	cout <<"height of binary tree is:"<< height(root);
return 0;	
}
