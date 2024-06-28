#include<stdio.h>
main()
{
	int tuki;
	printf("Œ‚ğ“ü—Í:");
	scanf("%d", &tuki);
	if (tuki == '2') {
		printf("ÅI“ú‚Í28“ú‚Å‚·\n");
	}
	else {
		if (tuki <= 7) {
			printf("ÅI“ú‚Í%d“ú‚Å‚·\n",30 + tuki % 2);
		}
		else {
			printf("ÅI“ú‚Í%d“ú‚Å‚·\n",31 - tuki % 2);
		}
	}
	
}