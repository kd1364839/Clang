#include<stdio.h>
main()
{
	int s;
	s = 0;
	while (s != -999) {
		printf("整数(-999で終了):");
		scanf("%d", &s);
		if (s != -999) {
			printf("8進数 = %o   16進数 = %x\n", s, s);
		}
	}
}