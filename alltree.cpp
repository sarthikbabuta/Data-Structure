#include<iostream>
#include<queue>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};
/* Insertion*/
node *insertion(node *root,int data)
{
    if(root==NULL)
    {
        node *temp=new node;
        temp->data=data;
        temp->right=NULL;
        temp->left=NULL;
        root=temp;
    }
    else if(data<root->data)
        root->left=insertion(root->left,data);
    else
        root->right=insertion(root->right,data);
    return root;
}
/* Display*/
void preorder(node *root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(node *root)
{
    if(root!=NULL)
    {
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);
    }

}
void postorder(node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
/*Searching*/
int searchl(node *root,int data)
{
    if(root==NULL)
        return 0;
    if(root->data==data)
        return 1;
    else if(data<root->data)
        searchl(root->left,data);
    else
        searchl(root->right,data);
}
/*Min and Max element in tree*/

int mint(node *root)
{
    while(root->left!=NULL)
        root=root->left;
    return root->data;
}

int maxt(node *root)
{
    while(root->right!=NULL)
        root=root->right;
    return root->data;
}
/* Height Of the Tree */

int Heightt(node *root)
{
    if(root==NULL)
    {
       	return -1;
	} 
	else 
	{
		 return max(Heightt(root->left)+1,Heightt(root->right)+1);
	}
}

/*Level order Transveral */
void levelorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    queue<node*>Q;
    Q.push(root);
    while(!Q.empty())
    {
        node *current=Q.front();
        cout<<current->data<<" ";
       
        if(current->left!=NULL)
        {
           	Q.push(current->left);
     	}
         if(current->right!=NULL)
         {
		 
          	Q.push(current->right);
		} 
        	Q.pop();	
	
    }
     
}
/*Delete a node in binary tree */

node * deleteion(node *root,int data)
{
    if(root==NULL)
        return root;
    else if(data<root->data)
        root->left=deleteion(root->left,data);
    else if(data>root->data)
        root->right=deleteion(root->right,data);
    else
    {
        //Case: no child
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            root=NULL;
            return root;
        }
        //Case 2:1 Child
        else if(root->left==NULL)
        {
            node *temp;
            temp=root;
            root=root->right;
            delete temp;
        }
        else if(root->right==NULL)
        {
            node *temp;
            temp=root;
            root=root->left;
            delete temp;
        }
        else
        {
            int temp=mint(root->right);
            root->data=temp;
            root->right=deleteion(root->right,data);
        }
    }
    return root;
}
int main()
{
    node *head=NULL;
    int n,val;
    while(1)
    {
        cin>>n;
        if(n==-1)
            break;
        else
        {
            head=insertion(head,n);
        }
    }
   /* cout<<"Inorder"<<" ";
    inorder(head);
    cout<<endl<<"Preorder"<<" ";
    preorder(head);
    cout<<endl<<"Postorder"<<" ";
    postorder(head);*/
    /*cout<<endl<<"Enter the element to find ";
    cin>>val;
    if(searchl(head,val)==0)
        cout<<"Not found";
    else
        cout<<"found";
    cout<<endl<<"Enter the element to find ";
    cin>>val;
    if(searchl(head,val)==0)
        cout<<"Not found";
    else
        cout<<"found";
    */
     	cout<<endl<<"Level order transver ";
    levelorder(head);
    /*
      cout<<endl<<"Height of tree "<<Heightt(head);

    cout<<endl<<"Min element is tree "<<mint(head);
    cout<<endl<<"Max element is tree "<<maxt(head);
 
    

    cout<<endl<<"Deletion";
    cout<<endl<<"Enter the no";
    cin>>val;
    head=deleteion(head,val);
    cout<<"Inorder"<<" ";
    inorder(head);
    cout<<endl<<"Preorder"<<" ";
    preorder(head);
    cout<<endl<<"Postorder"<<" ";
    postorder(head);*/

}
