#include <stdio.h>
int main()
{
	int a, i, j, k;
	scanf("%d", &a);
	for(i=1; i<=2*a-1; i++)
	{
		for(j=1; j<=2*a-1; j++)
		{
			for(k=1; k<=a-j; k++)
		    {
		     	printf(" ");
		    }
		    printf("*");
		} 
	
		else if(j==2*a-1)
		{
			for(j=1; j<=2*a-1; j++)
		    {
			    printf("*");
		    }
		}
				
		printf("\n");
	}
	return 0;
}
