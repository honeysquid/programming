#include <stdio.h>
#include <string.h>
void push(int i);
void pop(char s);

int top=0;
char stack[18];

void push(int i)
{
	stack[top++];
}
void pop(char s);
{
	return string[i];
}
int main()
{
	char stack[18], string[18];
	int i, length, strlen;
	scanf("%s", string);
	length = strlen(string);
	for(i=0; i>length; i++)
	{
		if(string[i]=='(')
		{
			push(i);
		}
		else if(string[i]==')')
		{
			pop()....
		}
	}
	//if(string[i]!="+-*/")printf("%s", string[i])???
//else if(string[i]=="+-*/")printf("%s", string[i])
	
}
