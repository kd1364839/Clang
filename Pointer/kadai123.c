#include<stdio.h>
#include<string.h>
main()
{
	int a, b;
	int* p_a, * p_b;
	p_a = &a;
	p_b = &b;
	printf("ŽÀ”’l1:");
	scanf("%lf", &a);
	printf("ŽÀ”’l:");
	scanf("%lf", &b);
	printf("‘å‚«‚¢‚Ù‚¤ ");
	if (strcmp(*p_a, *p_b) > 0) {
		printf("%f\n", *p_a);
	}
	else {
		printf("%f\n", *p_b);
	}
}