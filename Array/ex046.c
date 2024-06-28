#include<stdio.h>
main()
{
	int i, f, gokei;
	int a[2][3] = {
		{10,20,30},
		{1,2,3}
	};
	for (f = 0; f <=1; f++) {
		for (gokei = 0, i = 0; i <= 2; i++) {
			printf("a[%d][%d] = %d\n", f, i, a[f][i]);
			gokei += a[f][i];
		}
		printf("%ds–Ú‚Ì‡Œv = %d\n\n",f, gokei);
	}
}