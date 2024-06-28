#include<stdio.h>
main()
{
	int i = 100, t = 10;
	int* p_i, * p_t;
	p_i = &i;
	p_t = &t;
	printf("%d + %d = %d\n", *p_i, *p_t, *p_i + *p_t);
	printf("%d - %d = %d\n", *p_i, *p_t, *p_i - *p_t);
	printf("%d * %d = %d\n", *p_i, *p_t, *p_i * *p_t);
	printf("%d / %d = %d\n", *p_i, *p_t, *p_i / *p_t);
}