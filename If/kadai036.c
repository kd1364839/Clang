#include<stdio.h>
main()
{
	int su1, su2, sa;
	printf("整数１:");
	scanf("%d", &su1);
	printf("整数2:");
	scanf("%d", &su2);
	if (su1 == su2) {
		printf("%dと%dは等しい\n", su1, su2);
	}
	else {
		if (su1 > su2) {
			printf("%dの方が%dより%d大きい\n", su1, su2, su1 - su2);
		}
		else {
			printf("%dの方が%dより%d小さい\n", su1, su2, su2 - su1);
		}
	}
}