#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, s, high, low, mid, han, d[11];
	srand(time(0));
	high = 100;
	for (i = 0; i < 11; i++) {
		s = (rand() % 10) + d[i - 1] + 1;
		d[i] = s;
	}
	printf("’Tõ’l‚ð“ü—Í(Å‘å’l:%d):", d[10]);
	scanf("%d", &s);
	low = 0;
	high = 10;
	for (i = 0; i < 11; i++) {
		printf("d[%2d] =%3d\n", i, d[i]);
	}
	while (high >= low) {
		mid = (low + high) / 2;
		if (s == d[mid])break;
		if (s > d[mid]) {
			low = mid + 1;

		}
		if (s < d[mid]) {
			high = mid - 1;
		}
	}
	if (high < low) {
		printf("Œ©‚Â‚©‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
		han = 0;
		for (i = 1; i < 11; i++) {
			if (abs(s - d[han]) > abs(s - d[i])) {
				han = i;
			}
		}
		printf("‹ßŽ—’l:d[%d] =%3d\n", han, d[han]);
	}
	else {
		printf("”­Œ©‚µ‚Ü‚µ‚½ d[%d]\n", mid);
	}
}