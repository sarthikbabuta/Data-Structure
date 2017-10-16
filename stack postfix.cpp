#include<iostream>
using namespace std;
char stack[100];
int top=-1;
void push(char val)
{
	top=top+1;
	stack[top]=val;
	
}
char pop()
{
	return stack[top--];
}
char peak_val()
{
	return stack[top];
}
int pre(char val)
{
	if(val=='*'||val=='/')
	{
		return 5;
	}
	else if(val=='+'||val=='-')
	{
		return 3;
	}
	else
	{
		return 0;
	}
}
int main()
{
	char temp;
	string infix;
	cin>>infix;
	string postfix=" ";
	infix=infix+')';
	push('(');
	for(int i=0;infix[i]!='\0';i++)
	{
		temp=infix[i];
		if(temp=='(')
		{
			push(temp);
		}
		else if(temp=='+'||temp=='*'||temp=='-'||temp=='/')
		{
			while(pre(peak_val())>=pre(temp))
			{
				postfix=postfix+pop();
			}
			push(temp);
			
		}
		else if(temp==')')
		{
			while(peak_val()!='(')
			{
				postfix=postfix+pop();
			}
			pop();
		}
		else
		{
			postfix=postfix+temp;
		}
	}
cout<<postfix;
	
	
}
