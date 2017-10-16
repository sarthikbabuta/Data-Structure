#include<iostream>
using namespace std;
class node
{
	node *next;
	node *temp=NULL;
	node *start=NULL;
	int data,n,x,total=0;
	public:
		void create()
		{
			cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			node *newnode;
			newnode=new node();
			newnode->data=x;
			newnode->next=NULL;
			if(start==NULL)
			{
				start=newnode;
				temp=start;
			}
			else
			{ 
				temp->next=newnode;
				temp=temp->next;
			 }
	    	}
	}
		void display()
		{
			
			temp=start;
			while(temp!=NULL)
			{
				total+=temp->data;
			
				temp=temp->next;
			}
			cout<<total;	
		}
};
int main()
{
	
	node n1,n2,n3;
	int n,num;
	n1.create();
	n1.display();
}
