#include<stdio.h>
int han(char a);
main()
{
	char a;
	int b;
	printf("�A���t�@�x�b�g1����:");
	scanf("%c", &a);
	b = han(a);
	printf("�߂�l��%d�Ȃ̂�", b);
	if (b == 1) {
		printf("�啶���ł�");
	}
	else {
		printf("�������ł�");
	}
}

int han(char a)
{
	int b;
	if (a <= 0x5a) {
		b = 1;
	}
	else {
		b = 0;
	}
	return(b);
}