#include<stdio.h>
int max(int data[],int a);
int min(int data[],int a);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	int b, s, a;
	a = 8;
	b = max(data, a);
	s = min(data, a);
	printf("Å‘å’l = %d\n", b);
	printf("Å¬’l = %d\n", s);
}

int max(int data[],int a)
{
	int i, max;
	max = 0;
	for (i = 0; i < a; i++) {
		if (data[i] > max) {
			max = data[i];
		}
	}
	return(max);
}

int min(int data[], int a)
{
	int i, min;
	min = 999;
	for (i = 0; i < a; i++) {
		if (data[i] < min) {
			min = data[i];
		}
	}
	return(min);
}