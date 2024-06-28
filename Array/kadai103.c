#include<stdio.h>
main()
{
	int a[5][5], b[5][5], c[5][5];
	int i, t;
	for (i = 0; i < 5; i++) {
		for (t = 0; t < 5; t++) {
			a[i][t] = i * 5 + (t +1);
			b[i][t] = 3 * (i * 5 + (t + 1));
			c[i][t] = a[i][t] + b[i][t];
			printf("%4d  ", c[i][t]);
		}
		printf("\n");
	}
}