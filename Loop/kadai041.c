#include<stdio.h>
main()
{
	int s, sum, no;
	sum = 0;
	no = 0;
	s = 0;
	while (s != -999) {
		printf("整数を入力(-999で終了):");
		scanf("%d", &s);
		if (s != -999) {
			sum += s;
			no++;
		}
	}
	printf("合計 = %d\n", sum);
	printf("平均 = %.2f", (float)sum / no);
}