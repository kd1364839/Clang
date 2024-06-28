#include<stdio.h>
main()
{
	int nen, han;
	printf("¼—ï‚ğ“ü—Í:");
	scanf("%d", &nen);
	han = nen / 4;
	if (nen - han * 4 == 0) {
			printf("‚¤‚é‚¤”N‚Å‚·\n");
		}
	else {
		printf("‚¤‚é‚¤”N‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n");
	}
}