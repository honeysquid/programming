#include <stdio.h>
int main()
{
	int i, max,cnt;
	max=-999;
	int array[9];

	for(i=1; i<=9; i++)
	{
	    scanf("%d", &array[i]);
	} 
	for(i=1; i<=9; i++)
	{
		if(max<array[i])
		{
		    max=array[i];
			cnt = i;
		}	
		
	}
	printf("%d\n%d", max, cnt);
}
