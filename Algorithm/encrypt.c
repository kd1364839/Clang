#include<stdio.h>
main()
{
	char s[100];
	int i;
	printf("入力:");
	scanf("%s", s);
	i = 0;
	while(s[i] != '\0') {
		s[i] = s[i] + 1;
		i++;
	}
	printf("暗号化文字列:%s\n", s);
}
