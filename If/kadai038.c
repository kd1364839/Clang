#include<stdio.h>
main()
{
	char a;
	printf("1文字入力?");
	scanf("%c", &a);
	printf("変換結果は");
	if (a >= 'A' && a <= 'Z') {
		printf("%c", a + 0x20);
	}
	else {
		if (a >= 'a' && a <= 'z') {
			printf("%c", a - 0x20);
		}
		else {
			printf("%c", a);
		}
	}
	printf("\n");
}