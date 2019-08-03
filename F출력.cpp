#include <stdio.h>
int main()
{
	int a, i, j, f; 
	scanf("%d", &a);
	for(i=1; i<=a;  i++) //줄바꿈 
	{
		for(j=i; j<=i; j++)  //별(열1) 
		{
			for(f=a-1; f<=j; f++)  // 공백 
			{ 
				printf(" ");
			} 
			printf("*");
		}
		printf("\n");
	}
}
