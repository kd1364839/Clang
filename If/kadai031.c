#include<stdio.h>
main()
{
	float no1, no2, hyo;
	printf("二つの実数値？");
	scanf("%f%f", &no1, &no2);
	hyo = no1;
	if (no2 > no1) {
		hyo = no2;
	}
	printf("大きいほうは = %f\n", hyo);
}