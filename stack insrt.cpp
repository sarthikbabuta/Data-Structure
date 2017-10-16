#include<iostream>
using namespace std;
class node
{
	node *next;
	node *front=NULL,*temp=NULL;
	node *top=NULL;
	int data,x;
	public:
		void create(int x)
		{
			node *newnode;
			newnode=new node();
			newnode->data=x;
			newnode->next=NULL;
			if(top==NULL)
			{
				top=newnode;
			}
			else
			{
				newnode->next=top;
				top=newnode;
			}
		}
		void pop()
		{
			top=top->next;
		}
		void display()
		{
			temp=top;
			while(temp!=NULL)
			{
				cout<<temp->data;
				temp=temp->next;
			}
		}
};
int main()
{
	node n1;
	int x,c;
	cout<<"Enter choice";
	cin>>c;
	while(c)
	{
		cout<<"Enter value";
		cin>>x;
	n1.create(x);
	cin>>c;
    }
    n1.pop();
    n1.display();
}
