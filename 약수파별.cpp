#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d %d", &a, &b);
	if(b%a == 0 && a!=0 && b!=0)
	{
		printf("%d | %d", a,b);
	}
	else if (a!=0 && b!=0)
	{
		printf("%d !| %d",a,b);
	}
} 
