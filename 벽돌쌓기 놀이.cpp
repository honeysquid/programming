#include <stdio.h>
int main()
{
	int N, i, sum=0, k, h;
	int array[100]={0,};
	float arg;
	scanf("%d", &N);
	for(i=1; i<=N; i++)
	{
		scanf("%d", &array[i]);
		sum+=array[i]; 
	}
	arg = (float)sum/N;
	
	for(i=1; i<=N; i++)
	{
		if(arg < array[i])
		{
			h += array[i] - arg;
		}
	}
	
	printf("The minimum number of moves is %d.", h);
}
