#include<stdio.h>
main()
{
	int tuki;
	printf("�������:");
	scanf("%d", &tuki);
	if (tuki == '2') {
		printf("�ŏI����28���ł�\n");
	}
	else {
		if (tuki <= 7) {
			printf("�ŏI����%d���ł�\n",30 + tuki % 2);
		}
		else {
			printf("�ŏI����%d���ł�\n",31 - tuki % 2);
		}
	}
	
}