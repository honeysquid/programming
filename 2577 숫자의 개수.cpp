#include <stdio.h>
int main()
{
	int a,b,c,x,i;
	int array[11]={0, };
	scanf("%d %d %d", &a,&b,&c);
	x=a*b*c;
	
	while(x>0)
	{
	    array[x%10]++;
	    x= x/10;
	}
	for(i=0; i<10; i++)
	{
		printf("%d\n", array[i]);
	}
}
