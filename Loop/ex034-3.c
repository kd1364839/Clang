#include<stdio.h>
main()
{
	int no, kai, kosu;
	kai = 1;
	printf("”‚ÍH");
	scanf("%d", &no);
	do {
		kosu = 1;
		do {
			printf("*");
			kosu += 1;
		} while (kai >= kosu);
		printf("\n");
		kai += 1;
	} while (no >= kai);
}