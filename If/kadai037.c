#include<stdio.h>
main()
{
	int i, han;
	printf("0から100までの整数:");
	scanf("%d", &i);
	if (i >= 90) {
		han = 5;
	}
	else {
		if (i >= 80) {
			han = 4;
		}
		else {
			if (i >= 50) {
				han = 3;
			}
			else {
				if (i >= 30) {
					han = 2;
				}
				else {
					han = 1;
				}
			}
		}
	}
	printf("その数値の判定結果は「%d」です\n", han);
}