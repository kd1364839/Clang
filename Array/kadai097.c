#include<stdio.h>
main()
{
	int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10], i, t;
	printf("”z—ña = ");
	for (i = 0, t = 9; i < 10; i++, t--) {
		printf("%d ", a[i]);
		c[i] = a[t];
	}
	printf("\n”z—ñc = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", c[i]);
	}
	printf("\n");
}