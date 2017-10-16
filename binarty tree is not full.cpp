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

bool isFullTree (struct node* root)
{
    // If empty tree
    if (root == NULL)
        return true;
 
    // If leaf node
    if (root->left == NULL && root->right == NULL)
        return true;
 
    // If both left and right are not NULL, and left & right subtrees
    // are full
    if ((root->left) && (root->right))
       {
       	return (isFullTree(root->left) && isFullTree(root->right));
	} 
 else
 {
 	 return false;
 }
    // We reach here when none of the above if conditions work
   
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
	 if (isFullTree(root1))
        printf("The Binary Tree is full\n");
    else
        printf("The Binary Tree is not full\n");
}
