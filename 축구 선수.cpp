#include <stdio.h>
int main()
{
	int max=-99, ctr, jud, i, ctz, jud_1, y, num, add,maximum ;
	double vic[100]={0,};
	scanf("%d %d", &ctr, &jud);
	//printf("������ �� : %d ���� ��: %d", ctr, jud);
	for(i=1; i<=ctr; i++)
	{
		scanf("%d %d", &ctz, &jud_1);
		//printf(" ������ ��� : %d ���� �� : %d", ctz, jud_1);
		for(y=1; y<=jud_1; y++)
		{
			scanf("%d %d", &num, &add);
			//printf("�ĺ� : %d ��ǥ��: %d", &num, &add);
			vic[num] = (double)add / ctr * 100;
			//printf("��ǥ�� : %d", vic[num]);
			if(max < vic[num])
			{
				max = vic[num];
				maximum = num;
				printf("max : %d", max);
			}
		}
	}
	printf("%d", maximum);
}
