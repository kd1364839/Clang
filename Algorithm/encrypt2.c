#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, k[20];
	char s[20];
	printf("文字列入力:");
	scanf("%s", s);
	srand(time(0));
	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
	}
	printf("暗号化文字:%s\n暗号化キー:", s);
	for (i = 0; s[i] != '\0'; i++) {
		printf("%d", k[i]);
	}
	printf("\n");
}