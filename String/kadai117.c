#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i, t;
	for (i = 0; i < 7; i++) {
		printf("%s", day[i]);
		printf("\n");
	}
}