#include<stdio.h>
main()
{
	int no, kazu, goke;
	goke = 0;
	kazu = 0;
	do {
		printf("êÆêî(-999Ç≈èIóπ)ÅH");
		scanf("%d", &no);
		if (no != -999) {
			goke += no;
			kazu++;
		}
	} while (no != -999);
	printf("çáåv = %d\n", goke);
	printf("ïΩãœ = %f\n", (float)goke / kazu);
}