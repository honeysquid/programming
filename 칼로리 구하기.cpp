#include<stdio.h>
int main()
{
	int a,b,c,d,i,total;

	int bug[5]={0, 461, 431, 420, 0};
	int dri[5]={0, 130, 160, 118, 0};
	int sid[5]={0, 100, 57, 70, 0};
	int des[5]={0, 167, 266, 75, 0};
	
	scanf("%d %d %d %d", &a, &b, &c,&d);

   	total=bug[a]+dri[b]+sid[c]+des[d];
   	
   	printf("Your total Calorie count is %d.", total);

	
}
