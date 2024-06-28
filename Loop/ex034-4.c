#include<stdio.h>
main()
{
	int no, kai, ku, kosu;
	kai = 0;
	printf("”‚ÍH");
	scanf("%d", &no);
	do {
		kai += 1;
		ku = no - kai + 1;
		do {
			printf(" ");
			ku -= 1;
		} while (ku > 0);
		kosu = 0;
		do {
			kosu += 1;
			printf("*");
		} while (kai > kosu);
		printf("\n");
	} while (no > kai);
}