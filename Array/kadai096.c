#include<stdio.h>
main()
{
	int c[10];
	int no, cnt, i;
	for (i = 0, cnt = 0,no = 0; i < 10; i++) {
		printf("����(-999�ŏI��):");
		scanf("%d", &no);
		if (no != -999) {
			c[i] = no;
			cnt++;
		}
		else {
			break;
		}
	}
	printf("�z�� c = ");
	for (i = 0; i < cnt; i++) {
		printf("%d ", c[i]);
	}
	printf("\n");
}