#include<iostream>
using namespace std;
class node
{
	node *next,*i,*j;
	node *temp;
	node *start;
	node *newnode;
	int data,pos,s;
	public:
		void create()
		{
			newnode=new node();
			cin>>newnode->data;
			newnode->next=NULL;
		}
		void insert()
		{
			
			create();
			while(newnode->data!=-1)
			{
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
			create();
		}
		}
		void beg()
		{

		start=start->next;
		}
		void position()
		{
			cout<<"enter pos";
			cin>>pos;
			temp=start;
			if(pos==1)
			{
				start=start->next;
				
			}
			else
			{
		     	for(int i=1;i<pos-1;i++)
		     	{  
				temp=temp->next;
		    	}
		    	
		    temp->next=temp->next->next;
		   }
			
		}
		void deleteafter()
		{
			cout<<"Enter element which you want to search";
			cin>>s;
			temp=start;
			while(temp->next!=NULL)
			{
				if(temp->data==s)
				{
					temp->next=temp->next->next;
				}
				temp=temp->next;
			}
		}
			void last()
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		
		}
		temp->next=NULL;
	}
	void element()
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
			temp=temp->next;
		}
	}
		void display()
		{
			temp=start;
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
//	n1.element();
//	n1.sort();
//	n1.swap();
//	n1.last();
//	n1.beg();
//	n1.position();
 //n1.deleteafter();
	n1.display();
}
