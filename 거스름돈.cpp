#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	scanf("%d", &a);
	b = 1000-a;
	c = b/100;
	d = c%50;
	e = d/10;

	printf("%d %d %d",c,d,e);
	
	return 0;
}
