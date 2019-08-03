#include <stdio.h>

int radd(int a);

int main()
{
	int c, d, num1, num2;
	int sum_1, total_1=0;
	
	scanf("%d %d", &c, &d);
	
	num1=radd(c);
	num2=radd(d);
	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);
	sum_1 = num1 + num2;
	total_1 = radd(sum_1);
	
	printf("%d", total_1);
	
	return 0;
}
int radd(int a)
{
	int div=0, sum=0, x=0; //345
	while(1)
	{
		x = a%10;
		sum = sum*10+x;
		div = a/10;
		a= div;	
		if(a==0)
		{
			return sum;
		}
	}
}



