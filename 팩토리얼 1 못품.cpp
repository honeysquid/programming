#include <stdio.h>
int Fac(int num)
{
	int f, result, i;
	for(i=1; i<=num; i++)
	{
		f = num*i;
	    result = num*f;
	}
	return result;
}

int main()
{
	int num;
	scanf("%d", &num);
	
	int result = Fac(num);
	printf("%d", result);
	return 0;
}

