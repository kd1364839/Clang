#include<stdio.h>
main()
{
	int h, m;
	float kazu, s;
	printf("�b�������:");
	scanf("%f", &kazu);
	if (kazu > 5000) {
		printf("�G���[�@5000�𒴂��鐔���ɑΉ����Ă��܂���\n");
	}
	else {
		if (kazu < 0) {
			printf("�G���[�@�}�C�i�X�̐����ɂ͑Ή����Ă��܂���\n");
		}
		else {
			h = kazu / 3600;
			m = (kazu - h * 3600) / 60;
			s = kazu - h * 3600 - m * 60;
			printf("%d����%d��%.1f�b�ł�\n", h, m, s);
		}
	}
}