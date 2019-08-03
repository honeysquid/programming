#include <stdio.h>
int main()
{
	int a,b,c,d;
	int add;
	int cnt = 0;
	scanf("%d", &a);
	add=a;
	while(add!=a || cnt==0)
	{
		b = add/10;
		c = add%10;
		d = (b+c)%10;
	    c=b;
		d=c;
		add = c*10+d;
	    cnt++;
	}
	printf("%d", cnt);
	return 0;
}

