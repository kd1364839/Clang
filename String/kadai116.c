#include<stdio.h>
main()
{
	char a[40], b[20];
	int i, t;
	printf("������1:");
	gets(a);
	printf("������2:");
	gets(b);
	for (i = 0; a[i] != '\0'; i++);
	for (t = 0; b[t] != '\0'; t++) {
		a[i] = b[t];
		i++;
	}
	a[i] = '\0';
	printf("%s\n", a);
}