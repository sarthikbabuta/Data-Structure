#include<iostream>
using namespace std;
class node
{
	node *next;
	node *temp=NULL;
	node *start;
	int data;
	public:
		void create(int x)
		{
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
		void display()
		{
			temp=start;
			while(temp!=NULL)
			{
				if(temp->data%2==0)
				{
					cout<<"even"<<temp->data<<endl;
				}
				else
				{
					cout<<"odd"<<temp->data<<endl;
				}
				temp=temp->next;
			}
		}
};
int main()
{
	int n,x;
	node n1;
	cout<<"enter loop";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		n1.create(x);
	}
	n1.display();
}
