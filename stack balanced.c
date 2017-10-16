#include<stdio.h>
#include<string.h>
int main()
{
	char exp[100],str[100];
	printf("enter exp");
	scanf("%s",&exp);
	int top=-1,i,n=strlen(exp);
	char temp;
	for(i=0;i<n;i++)
	{
		if((exp[i]==']'||exp[i]=='}'||exp[i]==')')&&top==-1)
		{
			break;
		}
		else if(exp[i]=='['||exp[i]=='{'||exp[i]=='(')
		{
			top++;
			str[top]=exp[i];
		}
		else
		{
			temp=str[top];
			top--;
			if((temp=='(' && exp[i]==')')||(temp=='{'&&exp[i]=='}')||(temp=='['&&exp[i]==']'))
			{
				continue;
			}
			else
			{
				break;
			}
		}
		
	}
	if(i==n&&top==-1)
	{
		printf("balanced\n");
	}
	else
	{
		printf("not balanced");
	}
	return 0;
}
