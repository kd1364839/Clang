#include<stdio.h>
main()
{
	int s;
	s = 0;
	while (s != -1) {
		printf("文字コード(-1で終了):");
		scanf("%d", &s);
		if (s != -1) {
			printf("%c\n", s);
		}
	}
}