#include<stdio.h>
main()
{
	char data[] = "GameSoft";
	int i;
	printf("������ = ");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c", data[i]);
	}
	printf("\n������ = %d\n", i);
}