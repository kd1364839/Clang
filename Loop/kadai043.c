#include<stdio.h>
main()
{
	int s;
	s = 0;
	while (s != -1) {
		printf("�����R�[�h(-1�ŏI��):");
		scanf("%d", &s);
		if (s != -1) {
			printf("%c\n", s);
		}
	}
}