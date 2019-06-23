#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node *left,*right;
};

int count_leafnode(node *root)
{
	if(root==NULL) return 0;
	if(root->left == NULL && root->right == NULL ) return 1;
	return count_leafnode(root->left) + count_leafnode(root->right);
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
	temp->right = temp3;
	
	cout <<"Total leaf node is:"<< count_leafnode(root);
return 0;	
}
