#include<stdio.h>
main()
{
	int i, han;
	printf("0����100�܂ł̐���:");
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
	printf("���̐��l�̔��茋�ʂ́u%d�v�ł�\n", han);
}