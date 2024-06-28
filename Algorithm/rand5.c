#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kazu, i;
	srand(time(0));
	for (i = 0; i <= 100; i++) {
		//srand(time(0));
		kazu = (rand() % 300) + 1;
		printf("%d\n", kazu);
	}
	printf("\n");
}