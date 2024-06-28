#include<stdio.h>
void gyaku(char* s1, char* s2);
main()
{
	char str1[256];
	char str2[256];
	printf("•¶Žš—ñ:");
	gets(str1);
	gyaku(str1, str2);
	printf("str1:%s\n", str1);
	printf("str2:%s\n", str2);
}

void gyaku(char *s1,char *s2)
{
	int su, i;
	for (su = 0; *(s1 + su) != '\0'; su++);
	for (su--, i = 0; su >= 0; su--, i++) {
		*(s2 + i)= *(s1 + su);
	}
	*(s2 + i) = '\0';
}