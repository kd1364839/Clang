#include<stdio.h>
main()
{
	int s, sum, no;
	sum = 0;
	no = 0;
	s = 0;
	while (s != -999) {
		printf("���������(-999�ŏI��):");
		scanf("%d", &s);
		if (s != -999) {
			sum += s;
			no++;
		}
	}
	printf("���v = %d\n", sum);
	printf("���� = %.2f", (float)sum / no);
}