#include<stdio.h>
main()
{
	int i, t = 0;
	for (i = 1; i <= 60; i++) {
		printf("%2d ", i);
		t++;
		if (t >= 20) {
			printf("\n");
			t = 0;
		}
	}
}