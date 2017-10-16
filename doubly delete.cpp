#include<iostream>
using namespace std;
class node
{
	node *next=NULL;
	node *prev=NULL;
	node *newnode;
	node *front=NULL;
	node *last=NULL;
	node *temp=NULL;
	int data,pos,s;
	public:
		void create()
		{
			newnode=new node();
			cin>>newnode->data;
			newnode->next=NULL;
			newnode->prev=NULL;
		}
		void insert()
		{
			create();
			while(newnode->data!=-1)
			{
				if(front==NULL)
				{
					front=newnode;
					last=newnode;
					temp=front;
				}
				else
				{
					temp->next=newnode;
					newnode->prev=temp;
					temp=temp->next;
					last=newnode;
				}
				create();
			}
		}
		void beg()
		{
			
			front=front->next;
		}
		void lasted()
		{
			
			last=last->prev;
			last->next=NULL;
		}
		void insertpos()
		{
			cout<<"Enter pos";
			cin>>pos;
			temp=front;
			if(pos==1)
			{
				create();
				newnode->next=front;
				front=newnode;
			}
			else
			{
				for(int i=1;i<pos-1;i++)
				{
					temp=temp->next;
				}
			temp->next=temp->next->next;
			temp->next->prev=temp;
			}
		}
		void element()
		{
			cout<<"enter element";
			cin>>s;
			temp=front;
			while(temp->next!=NULL)
			{
				if(temp->next->data==s)
				{
					temp->next=temp->next->next;
					temp->next->prev=temp;
				}
				temp=temp->next;
			}
		}
		void display()
		{
			temp=front;
			while(temp->next!=NULL)
			{
				cout<<temp->data;
				temp=temp->next;
			}
			cout<<temp->data;
		}
};
int main()
{
	node n1;
	n1.insert();
//	n1.insertpos();
	//n1.beg();
   //  n1.lasted();
n1.element();
	n1.display();
}
