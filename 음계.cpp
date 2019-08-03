#include <stdio.h>
int main()
{
	int a, i;
	
	for(i=1; i<=8; i++)
	{
	    scanf("%d", &a);
		if(i==1 && a==i)
		{
			printf("ascending\n");
		}
		else if(i==1 && a==8 )
		{
			printf("descending\n");
		}
		else if( i==1 && a!=8 && a!=1)
		{
			printf("mixed\n");
		}
	}
}
