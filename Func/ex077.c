#include<stdio.h>
void mm(int x, int y, int z, int* max, int* min);
main()
{
	int a, b, c, d, e;
	printf("整数を3つ入力:");
	scanf("%d%d%d", &a, &b, &c);
	mm(a, b, c, &d, &e);
	printf("最大値 = %d  最小値 = %d\n", d, e);
}

void mm(int x, int y, int z, int* max, int* min)
{
	int q[3] = { x,y,z };
	int i, t, w;
	for (i = 0; i < 2; i++) {
		for (t = i + 1; t < 3; t++) {
			if (q[i] > q[t]) {
				w = q[i];
				q[i] = q[t];
				q[t] = w;
			}
		}
	}
	*max = q[2];
	*min = q[0];
}