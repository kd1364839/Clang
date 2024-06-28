#include<stdio.h>
main()
{
	char data[20];
	int i;
	printf("•¶Žš—ñ:");
	gets(data);
	for (i = 0; data[i] != '\0'; i++) {
		putchar(data[i]);
		printf("\n");
	}
}