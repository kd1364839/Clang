#include<stdio.h>
main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* p, i;
	p = data;
	printf("�|�C���^���Œ�ŕ\��\n�z��@data[] = ");
	for (i = 0; *(p + i) != -999; i++) {
		printf("%d ", *(p + i));
	}
	printf("\n");
	printf("�|�C���^��ω������ĕ\��\n�z��@data[] = ");
	for (p = data; *p != -999; p++) {
		printf("%d ", *p);
	}
	printf("\n");
}