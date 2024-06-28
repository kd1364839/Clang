#include<stdio.h>
main()
{
	float goke, box[3];
	int i;
	goke = 0;
	for (i = 0; i <= 2; i++) {
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[i]);
		goke += box[i];
	}
	printf("‡Œv‚Í%.2f‚Å‚·\n", goke);
	printf("•½‹Ï‚Í%.2f‚Å‚·\n", goke / 3);
}