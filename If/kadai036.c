#include<stdio.h>
main()
{
	int su1, su2, sa;
	printf("®”‚P:");
	scanf("%d", &su1);
	printf("®”2:");
	scanf("%d", &su2);
	if (su1 == su2) {
		printf("%d‚Æ%d‚Í“™‚µ‚¢\n", su1, su2);
	}
	else {
		if (su1 > su2) {
			printf("%d‚Ì•û‚ª%d‚æ‚è%d‘å‚«‚¢\n", su1, su2, su1 - su2);
		}
		else {
			printf("%d‚Ì•û‚ª%d‚æ‚è%d¬‚³‚¢\n", su1, su2, su2 - su1);
		}
	}
}