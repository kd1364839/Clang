#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int kaku, kekka;
	srand(time(0));
	kaku = (rand() % 10) + 1;
	if (kaku <= 3) {
		printf("��S�̈ꌂ�I�I\n");
	}
	else {
		printf("���������I\n");
	}
}