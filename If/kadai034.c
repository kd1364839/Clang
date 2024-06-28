#include<stdio.h>
main()
{
	char moji, han;
	printf("アルファベット？");
	scanf("%c", &moji);
	if (moji >= 'a' && moji<='z') {
		printf("その文字は「小文字」です\n");
	}
	else {
		if (moji >= 'A' && moji <= 'Z') {
			printf("その文字は「大文字」です\n");
		}
		else {
			printf("ERROR\n");
		}
	}
}