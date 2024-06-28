#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i, t;
	for (i = 0; i < 7; i++) {
		for (t = 0; day[i][t] != '\0'; t++) {
			putchar(day[i][t]);
		}
		printf("\n");
	}
}