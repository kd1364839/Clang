#include<stdio.h>
main()
{
	float no1, no2, hyo;
	printf("��̎����l�H");
	scanf("%f%f", &no1, &no2);
	hyo = no1;
	if (no2 > no1) {
		hyo = no2;
	}
	printf("�傫���ق��� = %f\n", hyo);
}