#include <stdio.h>
int main()
{
	int i,sum=0;
	int array[10];
	float arg=0;
	for(i=1; i<=10; i++)
	{
		scanf("%d", &array[i]);
		sum+=array[i];
	}
	arg=(float)(sum/10);
	printf("%.2f", arg);
	return 0;
}
