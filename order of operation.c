#include<stdio.h>
#include<ctype.h>
#define SIZE 50
int s[SIZE];
int top=-1;
push(char elem)
{
	s[++top]=elem;
}
char pop()
{
	return (s[top--]);
}
int pr(char elem)
{
	switch(elem)
	{
		case '#':return 0;
		case '(':return 1;
		case '+':
			case '-':return 2;
			case '*':
				case '/':return 3;
				case '^':return 4;
	}
	
}
int main()
{
	char infix[50],postfix[50],ch,elem;
	int i=0,k=0;
	printf("read the infix exp");
	scanf("%s",&infix);
	push('#');
	while((ch=infix[i++])!=' ')
	{
		if(ch=='(')
		{
			push(ch);
		}
		else if(isalnum(ch))
		{
			postfix[k++]=ch;
		}
		else if(ch==')')
		{
			while(s[top]!='(')
			{
				postfix[k++]=pop();
			}
			elem=pop();
		}
		else
		{
			while(pr(s[top])>=pr(ch))
			{
				postfix[k++]=pop();
			}
			push(ch);
		}
	}
	while(s[top]!='#')
	{
		postfix[k++]=pop();
	}
	postfix[k]=' ';
	printf("given infix exps %s postfix exp %s ",infix,postfix);
}
