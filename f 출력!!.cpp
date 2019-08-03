#include <stdio.h>
int main()
{
	int a, i, j, f; 
	scanf("%d", &a);
	for(i=1; i<=a;  i++) 
	{
		for(j=i; j<=i; j++)  
		{
		    printf("*");
			for(f=a-1; f<=j; f++)  
			{ 
				printf(" ");
			} 
			
		}
		printf("\n");
	}
}
