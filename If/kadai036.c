#include<stdio.h>
main()
{
	int su1, su2, sa;
	printf("�����P:");
	scanf("%d", &su1);
	printf("����2:");
	scanf("%d", &su2);
	if (su1 == su2) {
		printf("%d��%d�͓�����\n", su1, su2);
	}
	else {
		if (su1 > su2) {
			printf("%d�̕���%d���%d�傫��\n", su1, su2, su1 - su2);
		}
		else {
			printf("%d�̕���%d���%d������\n", su1, su2, su2 - su1);
		}
	}
}