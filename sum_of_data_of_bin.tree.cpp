#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node *left,*right;
};

int sum(node *root)
{
	if(root==NULL) return 0;
	return sum(root->left) + sum(root->right) + root->data;
}

int main()
{
	node *root;
	root = new node();
	root->data = 1;
	node *temp;
	temp = new node();
	temp->data = 2;
	root->left = temp;
	node *temp1;
	temp1 = new node();
	temp1->data = 3;
	root->right = temp1;
	node *temp2;
	temp2 = new node();
	temp2->data = 4;
	temp->left = temp2;
	node *temp3;
	temp3 = new node();
	temp3->data = 5;
	temp1->right = temp3;
	
	cout <<"sum of data of binary tree is:"<< sum(root);
return 0;	
}
