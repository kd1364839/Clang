#include<stdio.h>
main()
{
	int en,no1,no2;
	printf("1:+  2:-  3:*  4:/\n���Z�q�����:");
	scanf("%d", &en);
	printf("��̐��������:");
	scanf("%d%d", &no1, &no2);
	if (en == 1) {
		printf("%d",no1 + no2);
	}
	else {
		if (en == 2) {
			printf("%d", no1 - no2);
		}
		else {
			if (en == 3) {
				printf("%d", no1 * no2);
			}
			else {
				printf("%d", no1 / no2);
			}
		}
	}
}