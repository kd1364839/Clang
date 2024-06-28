#include<stdio.h>
main()
{
	int kazu;
	printf("”‚ð“ü‚ê‚Ä:");
	scanf("%d", &kazu);
	while (kazu > 0) {
		kazu = kazu - 1;
		printf("*");
	}
	printf("\n");
}