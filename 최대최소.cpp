#include <stdio.h>
int main()
{
	int N, i, min, max;
	min= 999;
	max= -100;
	int array[1000];
	scanf("%d\n",&N);
	
    for(i=1; i<=N; i++)
	{ 
		scanf("%d",&array[i]);
		if(min>array[i])
        {
        	min=array[i];
	    }
	    
	    if(max<array[i])
	    {
	    	max= array[i];
	    }
    }
    printf("%d\n%d", min, max);
    return 0;
}
