#include<stdio.h>
main()
{
	char data1[] = "abcde";
	char data2[10];
	int i;
	printf("(コピー元)配列data1 = ");
	for (i = 0; data1[i] != '\0'; i++) {
		printf("%c", data1[i]);
		data2[i] = data1[i];
	}
	printf("\n(コピー先)配列data2 = ");
	for (i = 0; data2[i] != '\0'; i++) {
		printf("%c", data2[i]);
	}
	printf("\n");


}