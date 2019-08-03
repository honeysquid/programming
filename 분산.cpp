#include <stdio.h>
int main()
{
	int a,i, sum=0;
	float arg=0;
	int array[100];
	float total;
	scanf("%d", &a);
	for(i=1; i<=a; i++)
	{
		scanf("%d", &array[i]);
		sum+= array[i];	   
	}
	arg = (float)sum/a; 
	for(i=1; i<=a; i++)
	{ 
	    total+= (array[i]-arg)*(array[i]-arg);
	}
	printf("%.2f",total/a);
}
