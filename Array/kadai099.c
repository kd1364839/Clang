#include<stdio.h>
main()
{
	int no, i;
	char data[100];
	printf("�񐔂ƕ���������  ");
	scanf("%d%s", &no, data);
	for (i = 0; i < no; i ++ ) {
		printf("%s\t", data);
	}
}