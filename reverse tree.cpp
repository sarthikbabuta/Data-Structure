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

node *reverse(node* ptr)
{
   if(ptr==null)
        return;
  else{

  reverse(ptr->left);
  reverse(ptr->right);
  node* t= ptr->left;
  ptr->left=ptr->right;
  ptr->right=t;
  return;
  }
}
int main()
{
	int n,num,x;
	struct node *root=NULL;
	cout<<"Enter loop";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num;
	root=insert(root,num);
		
	}
	cout<<reverse(root);

	/*
	
		printpath(root);
	
		leftview(root);
		
	int c=sumofnode(root);
	cout<<"total sum="<<c;
	
	
	int c=countnonleafnode(root);
		cout<<"total eleemtn in non leaf node  are"<<c;
		
		int c=countelement(root);
	cout<<"total eleemtn in node are"<<c;
	
		kdistance(root,2);
		
		cout<<"total nodes are"<<countleafnode(root);
		
	largest(root);
	
	smallest(root);
	
	cout<<"Enter search element";
	cin>>x;
	 search(root,x)? cout << "Found\n": cout << "Not Found\n";
	 
	cout<<"Enter element to be deleted";
	cin>>x;
	root=deletednode(root,x);
	inorder(root);
	
	cout<<"inorder"<<endl;
	inorder(root);
	
	cout<<"preorder"<<endl;
	preorder(root);
	
	cout<<"postorder"<<endl;
	postorder(root);
	
	deleted(root);*/
}
