#include<stdio.h>
main()
{
	int kazu, gokei, kosu;
	kosu = 0;
	gokei = 0;
	for (kazu = 0; kazu != -999;) {
		gokei += kazu;
		printf("���́H");
		scanf("%d", &kazu);
		kosu += 1;
	}
	printf("���v��%d\n���ρ�%.2f\n", gokei, (float)gokei / kosu);
}