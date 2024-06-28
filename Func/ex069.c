#include<stdio.h>
main()
{
	int a, b, sum, cnt = 0;
	b = 0;
	sum = 0;
	while (cnt != EOF) {
		printf("®”:");
		cnt = scanf("%d", &a);
		sum += a;
		if (cnt != EOF) {
			b++;
		}
	}
	printf("‡Œv=%d •½‹Ï=%.2f\n", sum, (float)sum / b);
}