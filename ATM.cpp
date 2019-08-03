#include <stdio.h>
int main()
{
	int a;
	float b;
	scanf("%d %.2f", &a, &b);
	if(b-(a+0.5)<b)
	{
		printf("%.2f", b-(a+0.5));
	}
	else if(a%5!=0)
	{
		printf("%.2f", b);
	}
	else if(b-(a+0.5)>b)
	{
		printf("%.2f", b);
	}

}
