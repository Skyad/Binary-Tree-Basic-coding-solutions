#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node *left,*right;
};

void level_order(node* root, int level);  
int height(node* root);

void printLevel_Order(node* root)  
{  
    int h = height(root);  
	int i;  
    for(i=h;i>=1;i--)  
    {
    	level_order(root, i);
    }  
} 

void level_order(node *root,int level)
{
	if(root == NULL ) return;
	if(level==1)
	{
		cout<<root->data<<" ";
		return;
	}
	else
	{
		level_order(root->left,level-1);
		level_order(root->right,level-1);
	}	
}

int height(node *root)
{
	if(root==NULL) return 0;
	return max(height(root->left),height(root->right))+1;
}

int main()
{
	node *root;
	root = new node();
	root->data = 1;
	
	node *temp1;
	temp1 = new node();
	temp1->data = 2;
	root->left = temp1;
	
	node *temp2;
	temp2 = new node();
	temp2->data = 3;
	root->right = temp2;
	
	node *temp11;
	temp11 = new node();
	temp11->data = 4;
	temp1->left = temp11;
	
	node *temp12;
	temp12 = new node();
	temp12->data = 5;
	temp1->right = temp12;
	
	node *temp21;
	temp21 = new node();
	temp21->data = 6;
	temp2->left = temp21;
	
	node *temp22;
	temp22 = new node();
	temp22->data = 7;
	temp2->right = temp22;

	printLevel_Order(root);
return 0;	
}
