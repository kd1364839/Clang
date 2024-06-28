#include<stdio.h>
main()
{
	int no, goke;
	no = 0;
	goke = 0;
	do {
		no++;
		printf("%d", no);
		goke += no;
		if (goke < 300) {
			printf("+");
		}
	} while (goke < 300);
	printf("=%d\n", goke);
}