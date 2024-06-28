#include<stdio.h>
main()
{
	int h, m;
	float kazu, s;
	printf("秒数を入力:");
	scanf("%f", &kazu);
	if (kazu > 5000) {
		printf("エラー　5000を超える数字に対応していません\n");
	}
	else {
		if (kazu < 0) {
			printf("エラー　マイナスの数字には対応していません\n");
		}
		else {
			h = kazu / 3600;
			m = (kazu - h * 3600) / 60;
			s = kazu - h * 3600 - m * 60;
			printf("%d時間%d分%.1f秒です\n", h, m, s);
		}
	}
}