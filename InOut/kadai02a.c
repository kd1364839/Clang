#include<stdio.h>
main()
{
	double a, b;
	printf("2�̎���:");
	scanf("%lf%lf", &a, &b);
	printf("***%.1f��%.1f�̎l�����Z***\n", a, b);
	printf("�a = %f ", a + b);
	printf("�� = %f ", a - b);
	printf("�� = %f ", a * b);
	printf("�� = %f\n", a / b);
}