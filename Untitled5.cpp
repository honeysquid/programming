#include <stdio.h>
int main()
{
	int N, i, j, g;
	
	for(i=1; i<=N; i++)
	{
		for(j=1; j<=N-i; j++)
		{
			printf(" ");
		}
		for(g=1; g<i+1; g++)
	    {
	        printf("*");
        }
	    printf("\n");
	}
	
	return 0;
}
