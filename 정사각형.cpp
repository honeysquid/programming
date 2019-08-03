#include <stdio.h>
int main()
{
	int N,i,j, k;
	scanf("%d", &N); 
	for (i=1; i<=N; i++)
	{
		for(j=i; j<=i; j++)
		{
		    for(k=j; k<=j; k++)
		    {
		    	printf("*");
		    }
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
