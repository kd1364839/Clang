#include<stdio.h>
main()
{
	char s[100];
	int i;
	printf("�Í������������:");
	scanf("%s", s);
	i = 0;
	while (s[i] != '\0') {
		s[i] = s[i] - 1;
		i++;
	}
	printf("������������:%s\n", s);
}