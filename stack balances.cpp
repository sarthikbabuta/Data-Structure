#include<iostream>
using namespace std;
char stack[100];
int top=1;
void push(char val)
{
	top=top+1;
	stack[top]=val;
	
}
char pop()
{
	return stack[top--];
}
int main()
{
	char temp;
	string infix;
	cin>>infix;
	for(int i=0;infix[i]!='\0';i++)
	{
		temp=infix[i];
		if(temp=='('||temp=='{'||temp=='[')
		{
			push(temp);
		}
		else if(temp==')' && stack[top]=='(')
		{
			pop();
		}
		else if(temp=='}' && stack[top]=='{')
		{
			pop();
		}
		else if(temp==']' && stack[top]=='[')
		{
			pop();
		}
	}
	if(pop()==0)
	{
		cout<<"bal";
	}
	else
	{
		cout<<"not";
	}
	
	
}
