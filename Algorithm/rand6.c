#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ran, pre;
	printf("何を出しますか？\n(1:グー 2:チョキ 3:パー)");
	scanf("%d", &pre);
	if (pre == 1) {
		printf("プレイヤーは、グーです。\n");
	}
	else {
		if (pre == 2) {
			printf("プレイヤーは、チョキです。\n");
		}
		else {
			printf("プレイヤーは、パーです。\n");
		}
	}
	srand(time(0));
	ran = (rand() % 3) + 1;
	if (ran == 1) {
		printf("コンピューターは、グーです。\n");
	}
	else {
		if (pre == 2) {
			printf("コンピューターは、チョキです。\n");
		}
		else {
			printf("コンピューターは、パーです。\n");
		}
	}
	if (ran == pre) {
		printf("あいこです。\n");
	}
	else {
		if (ran == 3) {
			if (pre == 1) {
				printf("コンピュータの勝ち。\n");
			}
		}
		else{
			if (ran < pre) {
				printf("コンピュータの勝ち。\n");
			}
			else {
				printf("プレイヤーの勝ち。\n");
			}
		}
	}
}