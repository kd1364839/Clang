#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int d[100], s, i;
	srand(time(0));
	for (i = 0; i < 100; i++) {
		s = (rand() % 100) + 1;
	}
	printf("探索値:");
	scanf("%d", &s);
	for (i = 0; i < 100; i++) {
		if (d[i] == s)break;
	}

	if (i >= 100) {
		printf("見つからなかった\n");
	}
	else {
		printf("発見:%d番\n", i);
	}
}