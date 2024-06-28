#include<stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &moji);
	if (moji > 0x40) {
		if (moji < 0x5B) {
			printf("‘å•¶Žš‚Å‚·\n");
		}
		else {
			printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·\n");
		}
	}
	else {
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·\n");
	}
}