#include<stdio.h>
int gokei(int a, int b,int c);
float heikin(int a, int b, int c);
main()
{
	int a, b, c, sum;
	float avg;
	printf("整数を入力:");
	scanf("%d%d%d", &a, &b, &c);
	sum = gokei(a, b, c);
	avg = heikin(a, b, c);
	printf("合計は%d 平均は%.2f", sum, avg);
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