#include <stdio.h>
int main()
{
	int i, j, g;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5-i; j++)
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
