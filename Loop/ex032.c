#include<stdio.h>
main()
{
	int kazu, kai;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &kazu);
	for (kai = 1; kai <= 5; kai += 1) {
		printf("%d ", kazu * kai);
	}
	printf("\n");
}