#include<stdio.h>
main()
{
	int kazu, gokei, kosu;
	kosu = 0;
	gokei = 0;
	for (kazu = 0; kazu != -999;) {
		gokei += kazu;
		printf("”‚ÍH");
		scanf("%d", &kazu);
		kosu += 1;
	}
	printf("‡Œv%d\n•½‹Ï%.2f\n", gokei, (float)gokei / kosu);
}