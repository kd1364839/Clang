#include<stdio.h>
main()
{
	int no1, no2, no3, sum;
	float avg;
	printf("�������R����:");
	scanf("%d%d%d", &no1, &no2, &no3);
	sum = no1 + no2 + no3;
	avg = (float)sum / 3;
	printf("���v��%d   ���ρ�%.2f\n", sum, avg);

}