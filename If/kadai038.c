#include<stdio.h>
main()
{
	char a;
	printf("1•¶Žš“ü—Í?");
	scanf("%c", &a);
	printf("•ÏŠ·Œ‹‰Ê‚Í");
	if (a >= 'A' && a <= 'Z') {
		printf("%c", a + 0x20);
	}
	else {
		if (a >= 'a' && a <= 'z') {
			printf("%c", a - 0x20);
		}
		else {
			printf("%c", a);
		}
	}
	printf("\n");
}