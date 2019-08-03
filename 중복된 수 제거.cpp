#include <stdio.h>
int main()
{
	int i, num1, num2;
	int array[10];
	int d[21]={0,};
	
	for(i=1; i<=10; i++)
	{
		scanf("%d", &array[i]);
		if(array[i]<0)
		{
			d[0-array[i]]++;	
		}
		else if(array[i]>0)
		{
			d[10+array[i]]++;
		}
		
	}
	for(i=1; i<=10; i++)
	{
		if(array[i]<0)
		{
			if(d[0-array[i]] == 1)	
			{
				printf("%d ", array[i]);
			}		
		}
		else if(d[10+array[i]] == 1)
		{
			printf("%d ", array[i]);
		}
	
	}

	
	return 0;
} 
