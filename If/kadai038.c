#include<stdio.h>
main()
{
	char a;
	printf("1��������?");
	scanf("%c", &a);
	printf("�ϊ����ʂ�");
	if (a >= 'A' && a <= 'Z') {
		printf("%c", a + 0x20);
	}
	else {
		if (a >= 'a' && a <= 'z') {
			printf("%c", a - 0x20);
		}
		else {
			printf("%c", a);
		}
	}
	printf("\n");
}