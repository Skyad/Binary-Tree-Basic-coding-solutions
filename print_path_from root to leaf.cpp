#include<bits/stdc++.h>
using namespace std;

class node
{
	public:
	int data;
	node *left,*right;
};

void printPathsRecur(node* node, int path[], int pathLen);  
void printArray(int s[], int len); 

void path(node* node)  
{  
    int path[1000];  
    printPathsRecur(node, path, 0);  
} 

void printPathsRecur(node* node, int path[], int pathLen)  
{  
    if (node == NULL)  
        return;  
        
    path[pathLen] = node->data;  
    pathLen++;  
      
    if (node->left == NULL && node->right == NULL)  
    {  
        printArray(path, pathLen);  
    }  
    else
    {  
        printPathsRecur(node->left, path, pathLen);  
        printPathsRecur(node->right, path, pathLen);  
    }  
}

void printArray(int s[], int len)  
{  
    int i;  
    for (i = 0; i < len; i++)  
    {  
        cout << s[i] << "-> ";  
    }  
    cout<<endl;  
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
	
	path(root);
return 0;	
}
