#include<stdio.h>
int gokei(int a, int b,int c);
float heikin(int a, int b, int c);
main()
{
	int a, b, c, sum;
	float avg;
	printf("®”‚ğ“ü—Í:");
	scanf("%d%d%d", &a, &b, &c);
	sum = gokei(a, b, c);
	avg = heikin(a, b, c);
	printf("‡Œv‚Í%d •½‹Ï‚Í%.2f", sum, avg);
}

int gokei(int a, int b, int c)
{
	int goke;
	goke = a + b + c;
	return(goke);
}

float heikin(int a, int b, int c)
{
	float heki;
	heki = (a + b + c) / 3;
	return(heki);
}