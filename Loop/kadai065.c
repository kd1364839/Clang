#include<stdio.h>
main()
{
	int no, kazu, goke;
	goke = 0;
	kazu = 0;
	do {
		printf("����(-999�ŏI��)�H");
		scanf("%d", &no);
		if (no != -999) {
			goke += no;
			kazu++;
		}
	} while (no != -999);
	printf("���v = %d\n", goke);
	printf("���� = %f\n", (float)goke / kazu);
}