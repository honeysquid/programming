#include <stdio.h>
int main()
{
	int a, i, j, k;
	scanf("%d", &a);
	for(i=1; i<=a; i++)
	{
	   if (i==a/2+1)  
	    {
	    	for(j=1; j<=a; j++)
	    	{
	    		printf("*");
			}
        }
		
	   else
	    {
		    for(k=1; k<=a-2; k++) //��  
		    {
			    for(j=2; j<=a-1; j++) //����  
	    	    {
	    	    	for(k=a-2; k<=a-j; k++) //��22
	    	    	{
	    	    		printf("*");
					}
	    		   printf(" ");
		    	}
			    printf("*");
			}
	    }
	    printf("\n");
	}    
    return 0;
}
