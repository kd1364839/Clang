#include<stdio.h>
main()
{
	int no, kosu;
	printf("”‚ÍH");
	scanf("%d", &no);
	do {
		kosu = 5;
		do {
			printf("*");
			kosu -= 1;
		} while (kosu > 0);
		printf("\n");
		no -= 1;
	} while (no > 0);
}