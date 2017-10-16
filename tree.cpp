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

void inorder(node *root)
{
	if(root!=NULL)
	{
     inorder(root->left);
	cout<<root->data;
    inorder(root->right);  
    }	
}
void postorder(node *root)
{
	if(root!=NULL)
	{
     postorder(root->left);
     postorder(root->right); 
	cout<<root->data;
     
    }	
}
void preorder(node *root)
{
	if(root!=NULL)
	{
	cout<<root->data;
     preorder(root->left);
    preorder(root->right);  
    }	
}
node* find(node *root)
{
	while(root->left!=NULL)
	{
		root=root->left;
	}
	return root;
}
node* deletednode(node *root,int num)
{
	if(root==NULL)
	return root;
	else if(num<root->data)
	{
		root->left=deletednode(root->left,num);
	}
	else if(num>root->data)
	{
		root->right=deletednode(root->right,num);
	}
	else
	{
		if(root->left==NULL&&root->right==NULL)
		{
			delete root;
		}
		else if(root->left==NULL)
		{
			node *temp=root;
			root=root->right;
			delete temp;
		}
		else if(root->right==NULL)
		{
			node *temp=root;
			root=root->left;
			delete temp;
		}
		else
		{
			node *temp=find(root->right);
			root->data=temp->data;
			root->right=deletednode(root->right,temp->data);
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

node *search(node *root,int num)
{
	if(root==NULL||root->data==num)
	{
		return root;
	}
    if(num>root->data)
	{
		return search(root->right,num);
	}
	else
	{
		return search(root->left,num);
	}
			
}
//puri node delete krdunga
/*void deleted(node *root)
{
	if(root==NULL)
	return;
	deleted(root->left);
	deleted(root->right);
	cout<<"deleted root"<<root->data;
}*/
void largest(node *root)
{
	while(root!=NULL&&root->right!=NULL)
	{
		root=root->right;
	}
		cout<<"largest value="<<root->data;
}
void smallest(node *root)
{
	
	while(root!=NULL&&root->left!=NULL)
	{
		root=root->left;
	}
		cout<<"smallest value="<<root->data;
}
int countleafnode(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	if(root->left==NULL&&root->right==NULL)
	{
		return 1;
	}
	else
	{
		return countleafnode(root->left)+countleafnode(root->right);
	}
}
int countelement(node *root)
{
	int count=1;
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		count+=countelement(root->left)+countelement(root->right);
		return count;
		
	}
}
int countnonleafnode(node* root)
{
	if(root ==NULL || (root->left==NULL && root->right==NULL))
		return 0;
	return (1 + countnonleafnode(root->left) + countnonleafnode(root->right));
}
int sumofnode(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	else
	{
		return (root->data+sumofnode(root->left)+sumofnode(root->right));
	}
}
void kdistance(node *root,int num)
{
	if(root==NULL)
	{
		return;
	}
	if(num==0)
	{
		cout<<root->data;
	}
	else
	{
		kdistance(root->left,num-1);
		kdistance(root->right,num-1);
	}
}


void leftlevel(node *root,int level,int *maxlevel)
{
	if(root==NULL)
	{
		return;
	}
    if(level>*maxlevel)
	{
	cout<<root->data;
	*maxlevel=level;		
	}
	leftlevel(root->left,level+1,maxlevel);
	leftlevel(root->right,level+1,maxlevel);
	
}

void leftview(node *root)
{
	int maxlevel=0;
	leftlevel(root,1,&maxlevel);
}

node *reverse(node* root)
{
   if(root==NULL)
        return NULL;
  else
  {

  reverse(root->left);
  reverse(root->right);
  node* temp= root->left;
  root->left=root->right;
  root->right=temp;
  return root;
  }
}



void printarray(int arr[],int len);
void printpathrec(node *root,int arr[],int len);
void printpath(node *root)
{
	int arr[1000];
	printpathrec(root,arr,0);
}

void printpathrec(node *root,int arr[],int len)
{
	if(root==NULL)
	{
			return;
	}
	
	arr[len]=root->data;
	len++;
	if(root->left==NULL&&root->right==NULL)
	{
		printarray(arr,len);
	}
	else
	{
		printpathrec(root->left,arr,len);
		printpathrec(root->right,arr,len);
	}
}

void printarray(int arr[],int len)
{
	for(int i=0;i<len;i++)
	{
		cout<<arr[i];
	}
	 cout<<endl;
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
	

	/*
		reverse(root);
	inorder(root);
	
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
