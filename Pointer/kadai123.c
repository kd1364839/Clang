#include<stdio.h>
#include<string.h>
main()
{
	int a, b;
	int* p_a, * p_b;
	p_a = &a;
	p_b = &b;
	printf("実数値1:");
	scanf("%lf", &a);
	printf("実数値:");
	scanf("%lf", &b);
	printf("大きいほう ");
	if (strcmp(*p_a, *p_b) > 0) {
		printf("%f\n", *p_a);
	}
	else {
		printf("%f\n", *p_b);
	}
}