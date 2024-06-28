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
	printf("’Tõ’l:");
	scanf("%d", &s);
	for (i = 0; i < 100; i++) {
		if (d[i] == s)break;
	}

	if (i >= 100) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("”­Œ©:%d”Ô\n", i);
	}
}