#include<stdio.h>
main()
{
	char s[100];
	int i;
	printf("ˆÃ†‰»•¶š‚ğ“ü—Í:");
	scanf("%s", s);
	i = 0;
	while (s[i] != '\0') {
		s[i] = s[i] - 1;
		i++;
	}
	printf("•œ†‰»•¶š—ñ:%s\n", s);
}