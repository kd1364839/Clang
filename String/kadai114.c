#include<stdio.h>
main()
{
	char data[20];
	int i;
	printf("文字列:");
	gets(data);
	printf("文字列 = ");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c", data[i]);
	}
	printf("\n文字数 = %d\n", i);
}