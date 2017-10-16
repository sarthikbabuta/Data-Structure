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
bool isBST(node* root, node* l=NULL, node* r=NULL)
{
    // Base condition
    if (root == NULL)
        return true;
 
    // if left node exist that check it has
    // correct data or not
    if (l != NULL and root->data < l->data)
        return false;
 
    // if right node exist that check it has
    // correct data or not
    if (r != NULL and root->data > r->data)
        return false;
 
    // check recursively for every node.
    return isBST(root->left, l, root) and
           isBST(root->right, root, r);
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
  if (isBST(root1))
        cout << "Is BST";
    else
        cout << "Not a BST";
}
