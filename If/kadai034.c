#include<stdio.h>
main()
{
	char moji, han;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &moji);
	if (moji >= 'a' && moji<='z') {
		printf("���̕����́u�������v�ł�\n");
	}
	else {
		if (moji >= 'A' && moji <= 'Z') {
			printf("���̕����́u�啶���v�ł�\n");
		}
		else {
			printf("ERROR\n");
		}
	}
}