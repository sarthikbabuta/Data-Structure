#include<iostream>
using namespace std;
class node
{
	node *next=NULL;
	node *newnode;
	node *start=NULL,*temp=NULL;
	int data,x,y,pos;
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
			node *head;
			head=new node();
			cout<<"enter pos";
			cin>>pos;
			cout<<"enter node";
			cin>>y;
			head->data=y;
			head->next=NULL;
		    temp=start;
		    
			if(pos==1)
			{
				head->next=start;
			}
			else
			{
				for(int i=1;i<pos-1;i++)
				{
						temp=temp->next;
				}
					head->next=temp->next;
		    	temp->next=head;
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
