#include <stdio.h>
#include <string.h>

int main()
{
	char stack[18], string[18];
	int i,top=0, length;
	
	scanf("%s", string);
	length=strlen(string);
	
	for(i=0; i<length; i++)
	{
		if(string[i]=='(')
		{
			stack[++top]=string[i];
		}
		else if(string[i]=='+' || string[i]=='-')
		{
			stack[++top]=string[i];
		}
		else if(string[i]=='*' || string[i]=='/')
		{
			stack[++top]=string[i];
		}	
		else if (string[i]==')')
		{
			if(stack[top]!='(')
			{
				printf("%c", stack[top--]);
			}
		}
		else 
		{
			printf("%c", string[i]);
		}
	}
	for(i=top; i>-1; i--)
	{
		if(stack[i]!='(')
			{
				printf("%c", stack[i]);
			}
	}
	return 0;
}
