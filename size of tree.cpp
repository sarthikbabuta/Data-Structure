#include<iostream>
using namespace std;
struct node
{
	node *left=NULL;
	node *right=NULL;
	int data;
};
node *insert(node *root,int num)
{
	if(root==NULL)
	{
		root=new node();
		root->data=num;
		root->left=NULL;
		root->right=NULL;
	}
    else
    {
    	if(num<=root->data)
    	{
    		root->left=insert(root->left,num);
		}
		else if(num>root->data)
		{
			root->right=insert(root->right,num);
		}
	
	}
	return root;
}

int size( node* root) 
{  
  if (root==NULL) 
    return 0;
  else    
    return(size(root->left) + 1 + size(root->right));  
}
int main()
{
	int n,num,x;
	struct node *root1=NULL;

	cout<<"Enter loop";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
	root1=insert(root1,num);
		
	}
cout<<size(root1);
}
