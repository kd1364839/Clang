#include<stdio.h>
main()
{
	int no, i;
	char data[100];
	printf("回数と文字列を入力  ");
	scanf("%d%s", &no, data);
	for (i = 0; i < no; i ++ ) {
		printf("%s\t", data);
	}
}