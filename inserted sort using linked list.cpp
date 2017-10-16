#include<iostream>
using namespace std;
struct node
{
	node *next=NULL;
	int data;
};	
		node* inserted(node *head,int num)
		{
				node *newnode;
				newnode=new node();
				newnode->data=num;
				newnode->next=NULL;
				if(head==NULL)
				{
					head=newnode;
					return head;
				}
				else
				{
						node *temp=NULL;
					temp=head;
					if(head->data>newnode->data)
					{
						newnode->next=head;
						head=newnode;
						return head;
					}
					while(temp->next!=NULL)
					{
						if(temp->next->data>newnode->data)
						{
							break;
						}
						else
						{
							temp=temp->next;
						}
					}
					newnode->next=temp->next;
					temp->next=newnode;
					return head;
				}
				
		}
int main()
{
	int n,num;
	node *head=new node(),*temp;
	head=NULL;
	cout<<"Enter loop";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num;
		head=inserted(head,num);
	}
	while(head!=NULL)
	{
		cout<<head->data;
		head=head->next;
	}
}
