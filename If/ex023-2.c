#include<stdio.h>
main()
{
	int nen, han;
	printf("��������:");
	scanf("%d", &nen);
	han = nen / 4;
	if (nen - han * 4 == 0) {
			printf("���邤�N�ł�\n");
		}
	else {
		printf("���邤�N�ł͂���܂���\n");
	}
}