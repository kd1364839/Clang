#include<stdio.h>
main()
{
	int kazu, kai;
	kai = 0;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &kazu);
	while (kai <= 10) {
		printf("%d + %d = %d\n", kazu, kai, kazu + kai);
		kai = kai + 1;
	}
}