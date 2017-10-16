#include<stdio.h>
#include<ctype.h>
#define SIZE 50
int s[SIZE];
int top=-1;
push(int elem)
{
	s[++top]=elem;
}
int pop()
{
	return (s[top--]);
}
int main()
{
	char postfix[50],ch;
	int i=0,op1,op2;
	printf("read postfix");
	scanf("%s",&postfix);
	while(ch=postfix[i++]!=' ')
	{
		if(isdigit(ch))
		{
			push(ch-'0');
			
		}
		else
		{
			op2=pop();
			op1=pop();
			switch(ch)
			{
				case '+':push(op1+op2);
				break;
				case '-':push(op1-op2);
				break;
					case '*':push(op1*op2);
				break;
					case '/':push(op1/op2);
				break;
			
			}
		}
	}
	printf("given postfix exp:%s",postfix);
	printf("result after eval %d",s[top]);
}
