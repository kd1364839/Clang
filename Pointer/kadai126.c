#include<stdio.h>
main()
{
	int data[10] = { 10,9,1,20,45,21,38,45,88 };
	int i, max, min;
	max = 0;
	min = 999;
	printf("配列の内容\ndata[] = ");
	for (i = 0; i < 9; i++) {
		printf("%d ", data[i]);
		if (max < data[i]) {
			max = data[i];
		}
		if (min > data[i]) {
			min = data[i];
		}
	}
	printf("\n最大値 = %d\n最小値 = %d\n", max, min);
}