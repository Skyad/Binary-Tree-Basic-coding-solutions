#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node *left,*right;
};

class node* new node(int data) 
{ 
	node->data = data;  
	node->left = NULL; 
	node->right = NULL; 
	return(node); 
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
	
	cout << node(root);
	
return 0;	
}
