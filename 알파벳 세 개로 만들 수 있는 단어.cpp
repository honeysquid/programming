#include <stdio.h>
int main()
{
	char i,j,h;
	char k[4]; 
	
	for(i='A'; i<='Z'; i++)
	{
		for(j='A'; j<='Z'; j++)
		{
			for(h='A'; h<='Z'; h++)
			{
				k[0]=i;
				k[1]=j;
				k[2]=h;
				k[3]='\0';
				printf("%s",k);
			}
		}
	}
}
