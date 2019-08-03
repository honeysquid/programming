#include <stdio.h>
int main()
{
	int a,i;
	int array[1000];
	scanf("%d",&a);
	for(i=0; i<a; i++)
	{
		scanf("%d", &array[i]);
	}
	for(i=a-1; i>=0; i--)
	{
	    printf("%d ", array[i]); 
	}
	
	return 0;
}
