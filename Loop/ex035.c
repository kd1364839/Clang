#include<stdio.h>
main()
{
	int no, goke;
	no = 1;
	goke = 0;
	while('1') {
		printf("数を入れて:");
		scanf("%d", &no);
		if (no == -999)break;
		goke += no;
	}
	printf("合計 = %d\n", goke);
}