#include <Stdio.h>
int main()
{
	int a,i;
	int array[1000];
	scanf("%d",&a);
	for(i=0; i<4; i++)
	{
		scanf("%d", array[i]);
	}	
    for(i=a; i<0; i--)
	{
    	printf("%d", array[i]); 
	}
	
	return 0;
} 
