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

int balanced_height(node *root)
{
	if(root==NULL) return 1;
	int left_h = height(root->left);
	int right_h = height(root->right);
	
	if((abs(left_h-right_h) <= 1) && balanced_height(root->left) && balanced_height(root->right))
		return 1;
	return 0;	
}

int main()
{
	node *root;
	root = new node();
	root->data = 5;
	
	node *temp1;
	temp1 = new node();
	temp1->data = 15;
	root->left = temp1;
	
	node *temp2;
	temp2 = new node();
	temp2->data = 25;
	root->right = temp2;
	
	node *temp3;
	temp3 = new node();
	temp3->data = 35;
	temp1->left = temp3;

	node *temp4;
	temp4 = new node();
	temp4->data = 45;
	temp1->right = temp4;
	cout<<balanced_height(root);
return 0;	
}
