#include<stdio.h>
main()
{
	int nen, han;
	printf("西暦を入力:");
	scanf("%d", &nen);
	han = nen / 4;
	if (nen - han * 4 == 0) {
			printf("うるう年です\n");
		}
	else {
		printf("うるう年ではありません\n");
	}
}