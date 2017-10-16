#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *next=NULL;
		node *prev=NULL;
		node *front=NULL;
		node *last=NULL;
	    node *newnode;
		node *temp=NULL;
		void insert(int n)
		{
			
			newnode=new node();
			newnode->data=n;
			newnode->next=NULL;
			newnode->prev=NULL;
			if(front==NULL)
			{
				front=newnode;
				last=newnode;
				temp=front;
			}
			else
			{
				newnode->prev=temp;
				temp->next=newnode;
				temp=temp->next;
				last=newnode;
			}
			
		}
		void delbeg()
		{
		
			front=front->next;
		}
		void delend()
		{

			last=last->prev;
			last->next=NULL;
		}
		void specdelelem()
		{
			int s;
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
		
		void insertpos()
		{
			int val,pos;
			cout<<"Enter pos";
			cin>>pos;
			cout<<"Enter element";
			cin>>val;
			temp=front;
			if(pos==1)
			{
				node *head;
				head=new node();
				head->data=val;
				head->next=front;
				front=newnode;
			}
			else
			{
				for(int i=1;i<pos-1;i++)
				{
					temp=temp->next;
				}
				node *head1;
				head1=new node();
				head1->data=val;
	       head1->next=temp->next;
		head1->prev=temp;
		temp->next=head1;
		temp->next->prev=head1;
			}
		}
		void deletepos()
		{
			int val,pos;
			cout<<"Enter pos";
			cin>>pos;
			temp=front;
			if(pos==1)
			{
				
				front=front->next;
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
		void displaybeg()
		{
			temp=front;
			while(temp->next!=NULL)
			{
				cout<<temp->data;
				temp=temp->next;
			}
				cout<<temp->data;
		}
			void displayend()
		{
			temp=last;
			while(temp!=NULL)
			{
				cout<<temp->data;
				temp=temp->prev;
			}
				
		}
		
};
int main()
{
	node n1;
	int x,n;
	cout<<"enter loop";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
			cin>>x;
		n1.insert(x);
	}
	//n1.delbeg();
	//n1.delend();
	//n1.specdelelem();
	//n1.deletepos();
	//n1.insertpos();
	//n1.displaybeg();
	//n1.displayend();
}
