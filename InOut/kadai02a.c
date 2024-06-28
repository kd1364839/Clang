#include<stdio.h>
main()
{
	double a, b;
	printf("2‚Â‚ÌÀ”:");
	scanf("%lf%lf", &a, &b);
	printf("***%.1f‚Æ%.1f‚Ìl‘¥‰‰Z***\n", a, b);
	printf("˜a = %f ", a + b);
	printf("· = %f ", a - b);
	printf("Ï = %f ", a * b);
	printf("¤ = %f\n", a / b);
}