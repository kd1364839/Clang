#include<stdio.h>
main()
{
	int data[10] = { 10,9,1,20,45,21,38,45,88 };
	int i, max, min;
	max = 0;
	min = 999;
	printf("�z��̓��e\ndata[] = ");
	for (i = 0; i < 9; i++) {
		printf("%d ", data[i]);
		if (max < data[i]) {
			max = data[i];
		}
		if (min > data[i]) {
			min = data[i];
		}
	}
	printf("\n�ő�l = %d\n�ŏ��l = %d\n", max, min);
}