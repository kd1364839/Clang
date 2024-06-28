#include<stdio.h>
main()
{
	int no = 1, sum = 0;
	printf("%d", no);
	sum += no;
	while (sum <= 300) {
		no++;
		printf("+%d", no);
		sum += no;
	}
	printf("=%d\n", sum);
}