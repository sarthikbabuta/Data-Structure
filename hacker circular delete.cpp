#include<iostream>
using namespace std;
class node
{
	node *next=NULL;
	node *newnode;
	node *start=NULL,*temp=NULL;
	int data,x,y,pos,s,flag=0;
	public:
		void insert()
		{
			cin>>x;
			while(x!=-1)
			{
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
				cin>>x;
			}
		}
		void create()
		{
		
		cout<<"Enter element";
		cin>>s;
		temp=start;
		while(temp->next!=NULL)
		{
			if(temp->next->data==s)
			{
				temp->next=temp->next->next;
			}
			else
			{
				flag=1;
				break;
			}
			
			temp=temp->next;
		}
		if(flag==1)
		{
			cout<<"not found";
		}
			
		}
		void display()
		{
			temp=start;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
};
int main()
{
	node n1;
	n1.insert();
	n1.create();
	n1.display();
	n1.display();
}
