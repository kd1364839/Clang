#include<stdio.h>
main()
{
	char data[20];
	int i;
	printf("������:");
	gets(data);
	printf("������ = ");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c", data[i]);
	}
	printf("\n������ = %d\n", i);
}