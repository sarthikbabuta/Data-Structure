#include<iostream>
using namespace std;
class node
{
	node *next;
	node *temp=NULL;
	node *start=NULL;
	int data,n,x;
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
				
			cout<<temp->data;
				temp=temp->next;
			}	
		}
		void merge(node n2)
		{
			temp=start;
			while(temp->next!=NULL)
			{
				temp=temp->next;
				
			}
			temp->next=n2.start;	
		}
};
int main()
{
	
	node n1,n2,n3;
	int n,num;
	n1.create();
	n1.display();
	cout<<endl;
	n2.create();
	n2.display();
	cout<<endl;
	n1.merge(n2);
	n1.display();
}
