#include<stdio.h>
main()
{
	int itbl[3] = { 10,20,30 };
	int* p_itbl;
	double dtbl[3] = { 10.0,20.0,30.0 };
	double* p_dtbl;
	p_itbl = itbl;
	printf("*p_itbl = %d\t", *p_itbl);
	p_itbl++;
	printf("%d\t", *p_itbl);
	p_itbl++;
	printf("%d\n", *p_itbl);
}