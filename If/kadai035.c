#include<stdio.h>
main()
{
	int i;
	printf("����:");
	scanf("%d", &i);
	if (i == 0) {
		printf("���͒l�́u�[���v�ł�");
	}
	else {
		if (i > 0) {
			printf("���͒l�́u�v���X�v�ł�");
		}
		else {
			printf("���͒l�́u�}�C�i�X�v�ł�");
		}
	}
}