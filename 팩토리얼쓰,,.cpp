#include <stdio.h>
int fac(int a)
{
	int i, result=1;

	for(i=a; i>=1; i--)
	{
	    result = result * i;	
	}
	return result;
}
 
int main()
{
	int a;
	scanf("%d", &a);
    
	int result;
    result = fac(a);
	printf("%d", result);
	return 0;
}
