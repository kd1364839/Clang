#include<stdio.h>
main()
{
	int tuki;
	printf("月を入力:");
	scanf("%d", &tuki);
	if (tuki == '2') {
		printf("最終日は28日です\n");
	}
	else {
		if (tuki <= 7) {
			printf("最終日は%d日です\n",30 + tuki % 2);
		}
		else {
			printf("最終日は%d日です\n",31 - tuki % 2);
		}
	}
	
}