#include<iostream>
using namespace std;
class stack
{
	public:
		int data;
		stack *ptr,*top=NULL,*top1=NULL,*temp,*temp1;
		void push(int x)
		{
			stack *head;
			head=new stack();
			head->data=x;
			head->ptr=NULL;
			if(top==NULL)
			{
				top=head;
			}
			else
			{
				head->ptr=top;
				top=head;
			}
		}
		void compare()
		{
			temp=top;
			while(temp!=NULL)
			{
				stack *head1;
				head1=new stack();
				head1->data=temp->data;
				head1->ptr=NULL;
				temp=temp->ptr;
				if(top1==NULL)
				{
					top1=head1;
				}
				else
				{
					head1->ptr=top1;
					top1=head1;
				}
			}
		}
		void display()
		{
			temp=top,temp1=top1;
			while(temp!=NULL&&temp1!=NULL)
			{
				if(temp->data==temp1->data)
				{
				temp=temp->ptr;
				temp1=temp1->ptr;
			}
			else
			break;
			}
			if(temp==NULL&&temp1==NULL)
			{
				cout<<"PALLINDROME";
			}
			else
			{
				cout<<"NOT PALLINDROME";
			}
		}

};
int main()
{
	stack s1;
	int a,n;
	cin>>n;
	while(n)
	{
		cin>>a;
	s1.push(a);
	cin>>n;
}
s1.compare();
s1.display();
return 0;
}
