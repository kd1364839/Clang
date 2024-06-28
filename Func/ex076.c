#include<stdio.h>
void keisan(int x, int y, int *sum, float *avg);
main()
{
	int a, b, c;
	float d;
	printf("®”‚ğ2‚Â“ü—Í:");
	scanf("%d%d", &a, &b);
	keisan(a, b, &c, &d);
	printf("‡Œv‚Í%d •½‹Ï‚Í%.2f\n", c, d);
}

void keisan(int x, int y, int *sum, float *avg)
{
	*sum = x + y;
	*avg = (x + y) / 2.0;
}