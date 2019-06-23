#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node *left,*right;
};

int max_path_sum_util(node *root, int &res) 
{ 
    if (root==NULL) return 0; 
    if (!root->left && !root->right) return root->data; 
   
    int left_sum = max_path_sum_util(root->left,res); 
    int right_sum = max_path_sum_util(root->right,res); 
  
    if (root->left && root->right) 
    { 
        res = max(res, left_sum + right_sum + root->data); 
        return max(left_sum, right_sum) + root->data; 
    } 
    return (!root->left) ? right_sum + root->data : left_sum + root->data; 
} 	

int max_path_sum(node *root) 
{ 
    int res = 0; 
    max_path_sum_util(root, res); 
    return res; 
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
	
	cout <<"sum of max path of tree:"<< max_path_sum(root);
return 0;	
}
