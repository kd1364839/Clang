#include<stdio.h>
main()
{
	int en,no1,no2;
	printf("1:+  2:-  3:*  4:/\n‰‰Zq‚ğ“ü—Í:");
	scanf("%d", &en);
	printf("“ñ‚Â‚Ì®”‚ğ“ü—Í:");
	scanf("%d%d", &no1, &no2);
	if (en == 1) {
		printf("%d",no1 + no2);
	}
	else {
		if (en == 2) {
			printf("%d", no1 - no2);
		}
		else {
			if (en == 3) {
				printf("%d", no1 * no2);
			}
			else {
				printf("%d", no1 / no2);
			}
		}
	}
}