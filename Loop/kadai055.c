#include<stdio.h>
main()
{
	int i;
	char t = 'A';
	for (i = 0; i < 26; i++) {
		printf("%c ", t + i);
	}
}