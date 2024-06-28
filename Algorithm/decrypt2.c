#include<stdio.h>
main()
{
	int i, no, k[20];
	char s[20];
	printf("•¶š—ñ:");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]‚Ì•œ†‰»ƒL[:",i);
		scanf("%d", &no);
		k[i] = no;
		s[i] = s[i] - no;
	}
	printf("•œ†‰»Ï‚İ•¶š—ñ:%s\n",s);
}