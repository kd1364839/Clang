#include<stdio.h>
void keisan(int x, int y, int *sum, float *avg);
main()
{
	int a, b, c;
	float d;
	printf("������2����:");
	scanf("%d%d", &a, &b);
	keisan(a, b, &c, &d);
	printf("���v��%d ���ς�%.2f\n", c, d);
}

void keisan(int x, int y, int *sum, float *avg)
{
	*sum = x + y;
	*avg = (x + y) / 2.0;
}