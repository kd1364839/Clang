#include<stdio.h>
main()
{
	int kazu, kosu;
	kosu = 0;
	printf("数を入れて:");
	scanf("%d", &kazu);
	while (kazu >= kosu) {
		kosu = kosu + 1;
		printf("*");
	}
	printf("\n");
}