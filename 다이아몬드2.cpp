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
		    
		for(j=1; j<=2*a-1; j++)
		{  
		    for(j=1; j<=2*a-1; j--)
		    {
		    	for(k=1; k<=a; k++)
		    	{
		    		printf(" ");
				}
		    	printf("*");
			}
		
		    printf("*"); 
		} 
				
		printf("\n");
	}
	return 0;
}
