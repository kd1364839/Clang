#include<stdio.h>
main()
{
	float goke, box[3];
	int i;
	goke = 0;
	for (i = 0; i <= 2; i++) {
		printf("実数を入力:");
		scanf("%f", &box[i]);
		goke += box[i];
	}
	printf("合計は%.2fです\n", goke);
	printf("平均は%.2fです\n", goke / 3);
}