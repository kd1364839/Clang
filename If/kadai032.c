#include<stdio.h>
main()
{
	int no, ama;
	char han;
	printf("整数？");
	scanf("%d", &no);
	han = '奇数';
	ama = no % 2;
	if (ama = 0) {
		han = '偶数';
	}
	printf("その数は「%c」です\n", han);
}