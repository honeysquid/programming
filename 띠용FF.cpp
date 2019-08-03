#include <stdio.h>
int main()
{
	int a, i, j ,k;
	scanf("%d", &a);
	for(i=1; i<=a; i++) //¿­  
	{
		for(j=i; j<=a/i && j==a/2+1; j=a)  
		{	
			for(k=i; k<=i; k=a-j)   
			{
				printf(" ");
			}
			printf("*");
	    }
		    for(j=i; j<=j!=a/i && j!=a/2+1; j=1)
			{
				printf("*");
			}
		printf("\n");
	}
    	return 0;
}
