#include<stdio.h>
main()
{
	int kazu;
	printf("数を入れて:");
	scanf("%d", &kazu);
	while (kazu > 0) {
		kazu = kazu - 1;
		printf("*");
	}
	printf("\n");
}