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
		
			void insertreverse()
		{
			
			create();
			while(newnode->data!=-1)
			{
				newnode->next=start;
				start=newnode;
					create();
			}
		
		}
		void beg()
		{
		create();
		newnode->next=start;
		start=newnode;
		}
		void position()
		{
			cout<<"enter pos";
			cin>>pos;
			create();
			temp=start;
			if(pos==1)
			{
				newnode->next=start;
				
			}
			else
			{
		     	for(int i=1;i<pos-1;i++)
		     	{  
				temp=temp->next;
		    	}
		    	
		    	newnode->next=temp->next;
		    	temp->next=newnode;
		   }
			
		}
		void insertafter()
		{
			cout<<"Enter element which you want to search";
			cin>>s;
			temp=start;
			while(temp->next!=NULL)
			{
				if(temp->data==s)
				{
					create();
					newnode->next=temp->next;
					temp->next=newnode;
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
		create();
		temp->next=newnode;
	}
	void sort()
	{
		temp=start;
		for(i=temp;i!=NULL;i=i->next)
		{
			for(j=i;j!=NULL;j=j->next)
			{
				if(i->data>j->data)
				{
					int t;
					t=i->data;
					i->data=j->data;
					j->data=t;
				}
			}
		}
	}
	void swap()
	{
		temp=start;
		while(temp!=NULL&&temp->next!=NULL)
		{
			int t;
			t=temp->data;
			temp->data=temp->next->data;
			temp->next->data=t;
			temp=temp->next->next;
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
//	n1.sort();
//	n1.swap();
//	n1.last();
//	n1.beg();
//	n1.position();
//  n1.insertafter();
	n1.display();
}
