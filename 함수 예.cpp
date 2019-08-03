#include <stdio.h>

int A(int a, int b)
{
	int add;
	add= a+b;
	return add;
}

int main()
{
	int num1;
	num1=A(10,20);
	printf("%d", num1);
	return 0;
}
