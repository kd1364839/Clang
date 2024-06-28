#include<stdio.h>
main()
{
	int a[5][5], b[5][5];
	int c, i, t;
	for (i = 0; i < 5; i++) {
		for (t = 0; t < 5; t++) {
			a[i][t] = i * 5 + (t + 1);
			b[i][t] = a[i][t] * 3;
		}
	}
	for (i = 0; i < 5; i++) {
		for (t = 0; t < 5; t++) {
			c = a[i][t];
			a[i][t] = b[i][t];
			b[i][t] = c;
		}
	}
	printf("”z—ña\n");
	for (i = 0; i < 5; i++) {
		for (t = 0; t < 5; t++) {
			printf("%4d ", a[i][t]);
		}
		printf("\n");
	}
	printf("”z—ñb\n");
	for (i = 0; i < 5; i++) {
		for (t = 0; t < 5; t++) {
			printf("%4d ", b[i][t]);
		}
		printf("\n");
	}
}