#include<stdio.h>
main()
{
	int ap[2][2][3] = { 
		{{3,4,5},{4,5,6}},
		{{2,2,3},{2,5,6}} 
	};
	int i, t, f, gokei;
	for (i = 0, gokei = 0; i < 2; i++) {
		printf("アパート%d", i + 1);
		for (t = 0; t < 2; t++) {
			printf("(%d階):", t + 1);
			for (f = 0; f < 3; f++) {
				printf("%d  ", ap[i][t][f]);
				gokei += ap[i][t][f];
			}
		}
		printf("\n");
	}
	printf("全体で%d人住んでいます\n", gokei);
}