#include <stdio.h>
#include <string.h>
int push(int k);
int pop();

int stack[51];
int top=0;

int pop()
{
	return stack[top--];	
}
int push(int k)
{
	stack[++top]=k;
}
int main()
{
	int i, k;
	char a[51];
	int length; 
	scanf("%s",a);	
	int array[51], cnt=0;
	length=strlen(a);
	
	for(k=0; k<length; k++)
	{
		if(array[k]=='(')
		{
			push(k);
		}
		else if(array[k]==')')
		{
			array[cnt++]=pop();
			array[cnt++]=k;
		}
	}
	
	
	if(top != 0)
	{
		printf("not match");
		return 0;
	}
	if(a[0]==')' || a[length -1]=='(')
	{
		printf("not match");
		return 0;
	}
	
	for(i=0; i<cnt; i++)
	{
		printf("%d ", array[i]);
		if(i%2==1)
		{
			printf("\n");
			continue;
		}
	}
	return 0;
}
