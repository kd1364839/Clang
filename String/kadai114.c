#include<stdio.h>
main()
{
	char data[20];
	int i;
	printf("•¶š—ñ:");
	gets(data);
	printf("•¶š—ñ = ");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c", data[i]);
	}
	printf("\n•¶š” = %d\n", i);
}