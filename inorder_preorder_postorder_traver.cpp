#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node *left,*right;
};

void inorder(node* root); 
void postorder(node* root);
void preorder(node* root); 

void postorder(node* root)  
{
	if(root==NULL) return;  
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
} 

void preorder(node* root)  
{
	if(root==NULL) return;
	cout<<root->data<<" ";  
    preorder(root->left);
    preorder(root->right);  
} 

void inorder(node* root)  
{
	if(root==NULL) return; 
    inorder(root->left);
    cout<<root->data<<" "; 
    inorder(root->right);  
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
	cout<<"Inorder traversal"<<" ";
	inorder(root);
	cout<<endl;
	cout<<"preorder traversal"<<" ";
	preorder(root);
	cout<<endl;
	cout<<"postorder traversal"<<" ";
	postorder(root);
	cout<<endl;

return 0;	
}
