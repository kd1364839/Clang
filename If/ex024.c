#include<stdio.h>
main()
{
	char moji;
	printf("���������:");
	scanf("%c", &moji);
	if (moji > 0x40) {
		if (moji < 0x5B) {
			printf("�啶���ł�\n");
		}
		else {
			printf("���̑��̕����ł�\n");
		}
	}
	else {
		printf("���̑��̕����ł�\n");
	}
}