#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ran, pre;
	printf("�����o���܂����H\n(1:�O�[ 2:�`���L 3:�p�[)");
	scanf("%d", &pre);
	if (pre == 1) {
		printf("�v���C���[�́A�O�[�ł��B\n");
	}
	else {
		if (pre == 2) {
			printf("�v���C���[�́A�`���L�ł��B\n");
		}
		else {
			printf("�v���C���[�́A�p�[�ł��B\n");
		}
	}
	srand(time(0));
	ran = (rand() % 3) + 1;
	if (ran == 1) {
		printf("�R���s���[�^�[�́A�O�[�ł��B\n");
	}
	else {
		if (pre == 2) {
			printf("�R���s���[�^�[�́A�`���L�ł��B\n");
		}
		else {
			printf("�R���s���[�^�[�́A�p�[�ł��B\n");
		}
	}
	if (ran == pre) {
		printf("�������ł��B\n");
	}
	else {
		if (ran == 3) {
			if (pre == 1) {
				printf("�R���s���[�^�̏����B\n");
			}
		}
		else{
			if (ran < pre) {
				printf("�R���s���[�^�̏����B\n");
			}
			else {
				printf("�v���C���[�̏����B\n");
			}
		}
	}
}