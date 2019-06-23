#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node *left,*right;
};

int mirror(node *root1, node *root2)
{
	if(root1 == NULL && root2 == NULL) return 1;
	if(root1!=NULL && root2!=NULL)
	{
		return
		(
			root1->data == root2->data && mirror(root1->left, root2->right) && mirror(root1->right, root2->left)
		);
	}
	return 0;
}

int main()
{
	node *root1;
	root1 = new node();
	root1->data = 5;
	
	node *root2;
	root2 = new node();
	root2->data= 5;
	
	node *temp1;
	temp1 = new node();
	temp1->data = 7;
	root1->left = temp1;
	
	node *temp2;
	temp2 = new node();
	temp2->data = 7;
	root2->right = temp2;
	
	node *temp11;
	temp11 = new node();
	temp11->data = 10;
	temp1->left = temp11;
	
	node *temp22;
	temp22 = new node();
	temp22->data = 10;
	temp2->right = temp22;

	cout << mirror(root1 , root2);
return 0;	
}
