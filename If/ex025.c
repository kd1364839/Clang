#include<stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &moji);
	if (moji >= 'A' && moji <= 'Z') {
		printf("‘å•¶Žš‚Å‚·");
	}
	else {
		if (moji >= 'a' && moji <= 'z') {
			printf("¬•¶Žš‚Å‚·");
		}
		else {
			if (moji >= '0' && moji <= '9') {
				printf("”Žš‚Å‚·");
			}
			else{
				printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
				}
		}
	}
}