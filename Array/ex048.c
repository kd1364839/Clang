#include<stdio.h>
main()
{
	int ap[2][2][3] = { 
		{{3,4,5},{4,5,6}},
		{{2,2,3},{2,5,6}} 
	};
	int i, t, f, gokei;
	for (i = 0, gokei = 0; i < 2; i++) {
		printf("�A�p�[�g%d", i + 1);
		for (t = 0; t < 2; t++) {
			printf("(%d�K):", t + 1);
			for (f = 0; f < 3; f++) {
				printf("%d  ", ap[i][t][f]);
				gokei += ap[i][t][f];
			}
		}
		printf("\n");
	}
	printf("�S�̂�%d�l�Z��ł��܂�\n", gokei);
}