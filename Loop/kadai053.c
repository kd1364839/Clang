#include<stdio.h>
main()
{
	int i, no;
	printf("®”:");
	scanf("%d", &no);
	for (i = 0; i <= 10; i++) {
		printf("%d ", no + i);
	}
	printf("\n");
}