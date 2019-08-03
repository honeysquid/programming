#include <stdio.h>
#include <string.h>

int main()
{
	int array[10001], i, top=0, data, cnt=0;
	char stack[50];
	int length;
	
	scanf("%s", stack);
	length = strlen(stack);
	
	for(i=0; i<length; i++)
	{
		if(stack[i] == '(')
		{
			top++;
			stack[top]=i;
		}	
		if(stack[i] == ')')
		{
			if(top==0)
			{
				top=10;
				break;		
			}
			array[cnt++]=stack[top];
			top--;
			array[cnt++]=i;
		}
		
	}
	for(i=0; i<cnt; i++)
	{
		printf("%d ", array[i]);
		if(i%2==1)
			printf("\n");
	}

}
