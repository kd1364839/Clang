#include<stdio.h>
main()
{
	int h, m;
	float kazu,s;
	printf("•b”‚ğ“ü—Í:");
	scanf("%f", &kazu);
	if (kazu > 5000) {
		printf("ƒGƒ‰[@5000‚ğ’´‚¦‚é”š‚É‘Î‰‚µ‚Ä‚¢‚Ü‚¹‚ñ\n");
	}
	else {
		h = kazu / 3600;
		m = (kazu - h * 3600) / 60;
		s = kazu - h * 3600 - m * 60;
		printf("%dŠÔ%d•ª%.1f•b‚Å‚·\n", h, m, s);
	}
}