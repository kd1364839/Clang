#include<stdio.h>
main()
{
	int no, goke;
	no = 1;
	goke = 0;
	while('1') {
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &no);
		if (no == -999)break;
		goke += no;
	}
	printf("‡Œv = %d\n", goke);
}