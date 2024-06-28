#include<stdio.h>
int han(char a);
main()
{
	char a;
	int b;
	printf("アルファベット1文字:");
	scanf("%c", &a);
	b = han(a);
	printf("戻り値は%dなので", b);
	if (b == 1) {
		printf("大文字です");
	}
	else {
		printf("小文字です");
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