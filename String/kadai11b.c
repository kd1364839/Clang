#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i, t;
	printf("”’l(0`6):");
	scanf("%d", &i);
	for (t = 0; day[i][t] != '\0'; t++) {
		putchar(day[i][t]);
	}
	printf("\n");
}