#include<stdio.h>
#include<string.h>
main()
{
	int a, b;
	int* p_a, * p_b;
	p_a = &a;
	p_b = &b;
	printf("�����l1:");
	scanf("%lf", &a);
	printf("�����l:");
	scanf("%lf", &b);
	printf("�傫���ق� ");
	if (strcmp(*p_a, *p_b) > 0) {
		printf("%f\n", *p_a);
	}
	else {
		printf("%f\n", *p_b);
	}
}