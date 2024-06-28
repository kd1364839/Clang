#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ran, i, t;
	srand(time(0));
	ran = (rand() % 100) + 1;
	t = 0;
	i = 0;
	while (i = 0) {
		if (ran <= 1) {
			printf("™™™™™ LR\n");
			i = 1;
		}
		else {
			if (ran <= 5) {
				printf("™™™™ UR\n");
			}
			else {
				if (ran <= 20) {
					printf("™™™ SR\n");
				}
				else {
					if (ran <= 40) {
						printf("™™ R\n");
					}
					else {
						printf("™ N\n");
					}
				}
			}
		}
		t++;
	}
	printf("%d‰ñŽÀs\n", t);
}