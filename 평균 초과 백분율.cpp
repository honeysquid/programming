#include <stdio.h>
int main()
{
	int a, i, sum=0, num=0;
	float arg, b;
	int array[100];
	scanf("%d", &a);
	for(i=1; i<=a; i++)
	{	
		scanf("%d", &array[i]);
		
		sum+=array[i];
	
		arg = (float)sum / a;
	
		if(arg < array[i]) //num+ = arg < array[i];
		{
			num++;	
		}	
	}
	printf("num : %d\n", num);
	b = (float)num/ (float)a * 100;
	printf("%.3f%%", b);
	
}  
