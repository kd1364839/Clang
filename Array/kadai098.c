#include<stdio.h>
main()
{
	int data[] = { 10,5,23,29,2,6,3,1,70,100 };
	int max, min, i;
	max = 0;
	min = 999;
	printf("”z—ñdata = ");
	for (i = 0; i < 10; i++) {
		printf("%d ", data[i]);
		if (max < data[i]) {
			max = data[i];
		}
		if (min > data[i]) {
			min = data[i];
		}
	}
	printf("\nÅ‘å’l = %d  Å¬’l = %d\n", max, min);

}