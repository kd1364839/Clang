#include<stdio.h>
main()
{
	int nen;
	printf("��������:");
	scanf("%d", &nen);
	if (nen > 2019) {
		printf("�ߘa�ł��B\n");
	}
	else {
		if (nen > 1989) {
			printf("�����ł��B\n");
		}
		else {
			if (nen > 1926) {
				printf("���a�ł��B\n");
			}
			else {
				printf("���a�ȑO�̃f�[�^������܂���B\n");
			}
		}
	}
}