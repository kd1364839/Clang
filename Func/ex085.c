#include<stdio.h>
void cat(char *data1, char *data2);
main()
{
	char a[100], b[100];
	int* p_a, * p_b;
	printf("�z��a:");
	gets(a);
	printf("�z��b:");
	gets(b);
	cat(a, b);
	printf("�z��a:%s\n", a);
}

void cat(char* data1, char* data2)
{
	for (; *data1 != '\0'; data1++);
	for (; *data2 != '\0'; data1++, data2++){
		*data1 = *data2;
	}
	*data1 = '\0';
	return;
}