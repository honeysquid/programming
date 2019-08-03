#include <stdio.h>
int main()
{
	int a, i, j;
	scanf("%d", &a);
	for(i=1; i<=a; i++)
	{
		if (i==1 || i==(a/2)+1)
		{
			for(j=1; j<=a; j++) 
			{
				printf("*");
		    }
		}
		else
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
