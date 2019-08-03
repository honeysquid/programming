#include <stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	switch(a)
	{
		case 1:
				int a,b;
				scanf("%d %d", &a, &b);
				printf("%d + %d = %d", a, b, a+b);
				printf("%d - %d = %d", a,b,a-b);
				printf("%d * %d = %d", a,b,a*b);
				printf("%d / %d = %d", a,b,a/b);
				printf("%d % %d = %d", a,b, a%b);	
			
			break;
			
	    case 2:
	    	int a, b;
	    	scanf("%d", &a);
	    	for(b=1; b<=9; b++)
	    	{
	    	    printf("%d * %d = %d", a, b, a*b);
	        }
	        break;
	        
	    case 3:
	    	
	    	int a, i, j, h;
	    	scanf("%d", &a);
	    		for(i=1; i<=5; i++)
	    		{
	    			for(j=1; j<=a-i; j++)
	    			{
	    				for(h=1; h<=i; h++)
	    				{
	    					printf("*");
						}
	    				printf(" ");
					}
	    			printf("\n");
				}
		case 4:
			int a;
			scanf("%d", &a);
			if(a<=100)
			{
				printf("A");
			}
			else if(a<=89) 
			{
			    printf("B");
			}
			else if(a<=79)
			{
				printf("C");
			}
	        else if(a<=69)
	        {
	      	    printf("D");
		    }
		    else if(a<=59)
		    {
		     	printf("E");
		    }
	}
	return 0;  
}
