#include<stdio.h>
main()
{
	int s, sum, no;
	sum = 0;
	no = 0;
	s = 0;
	while (s != -999) {
		printf("®”‚ğ“ü—Í(-999‚ÅI—¹):");
		scanf("%d", &s);
		if (s != -999) {
			sum += s;
			no++;
		}
	}
	printf("‡Œv = %d\n", sum);
	printf("•½‹Ï = %.2f", (float)sum / no);
}