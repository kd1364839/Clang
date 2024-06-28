#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	float sum, avg;
	int i;
	int* p_a;
	float* p_b;
	p_a = a;
	p_b = b;
	sum = 0;
	for (i = 0; i < 6; i++) {
		sum += *p_a;
		p_a++;
	}
	avg = sum / 6;
	printf("配列a 合計=%.0f  平均=%.3f\n", sum, avg);
	sum = 0;
	for (i = 0; i < 4; i++) {
		sum += *p_b;
		p_b++;
	}
	avg = sum / 4;
	printf("配列b 合計=%.3f  平均=%.3f\n", sum, avg);
}