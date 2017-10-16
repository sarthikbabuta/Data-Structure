#include<iostream>
using namespace std;
struct bstnode
{
	int data;
	bstnode *left;
	bstnode *right;
};
struct bstnode* getnew(int d)
{
	struct bstnode *newnode=new bstnode();
	newnode->data=d;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}
struct bstnode* insert(bstnode *r,int d)
{
	if(r==NULL)
	{
		r=getnew(d);
	}
	else 
	{
	if(d<=r->data)
	{
		r->left=insert(r->left,d);
	}
	else if(d>r->data)
	{
		r->right=insert(r->right,d);
	}
}
	return r;
}
int inorder(bstnode *r,int a)
{
	if(r==NULL)
	return 0;
	cout<<r->data<<" "<<a<<endl;
	if(r->data==a)
	{
	return 1;
	}
	inorder(r->left,a);
	inorder(r->right,a);
}
int main()
{
	struct bstnode *root=NULL;
	root=insert(root,10);
	root=insert(root,45);
	root=insert(root,35);
	root=insert(root,45);
	inorder(root);
	/*cout<<"enter element to be searched";
	int s;
	cin>>s;
	//inorder(root);
	if(inorder(root,s))
	{
		cout<<"found";
	}
	else
	{
	cout<<"not found";
	}*/
	return 0;
}
