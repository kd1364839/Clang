#include<stdio.h>
main()
{
	char s[100];
	int i;
	printf("“ü—Í:");
	scanf("%s", s);
	i = 0;
	while(s[i] != '\0') {
		s[i] = s[i] + 1;
		i++;
	}
	printf("ˆÃ†‰»•¶š—ñ:%s\n", s);
}
