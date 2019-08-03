#include <stdio.h>
int main()
{
	int a, i, j, k, h;
	scanf("%d", &a);
	for(i=1; i<=a; i++)
    {
    	if(i==1)
    	{
    		for(j=1; j<=a; j++)
    		{
    			printf("*");
			}
		}
		else
		{
			for(k=1; k<=a/2; k++)  
			{
				for(h=2; h<k+1; h++)
				{
					printf("*");
				}
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
