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

int identical(node* a,node* b)
{
    if (a==NULL && b==NULL)
    {
	   	return 1;
	} 
 
    if (a!=NULL && b!=NULL)
    {
        return(a->data == b->data &&identical(a->left, b->left) &&identical(a->right, b->right));
    }
    return 0;
} 

int main()
{
	int n,num,x;
	struct node *root1=NULL;
	struct node *root2=NULL;
	cout<<"Enter loop";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
	root1=insert(root1,num);
		
	}
		cout<<"Enter loop";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
	root2=insert(root2,num);
		
	}
  if(identical(root1, root2))
        printf("Both tree are identical.");
    else
        printf("Trees are not identical.");
}
