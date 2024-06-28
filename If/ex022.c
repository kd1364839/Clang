#include<stdio.h>
main()
{
	int nen;
	printf("西暦を入力:");
	scanf("%d", &nen);
	if (nen > 2019) {
		printf("令和です。\n");
	}
	else {
		if (nen > 1989) {
			printf("平成です。\n");
		}
		else {
			if (nen > 1926) {
				printf("昭和です。\n");
			}
			else {
				printf("昭和以前のデータがありません。\n");
			}
		}
	}
}