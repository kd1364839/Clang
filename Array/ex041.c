#include<stdio.h>
main()
{
	float goke, box[3];
	int i;
	goke = 0;
	for (i = 0; i <= 2; i++) {
		printf("���������:");
		scanf("%f", &box[i]);
		goke += box[i];
	}
	printf("���v��%.2f�ł�\n", goke);
	printf("���ς�%.2f�ł�\n", goke / 3);
}