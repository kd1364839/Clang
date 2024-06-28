#include<stdio.h>
#include<string.h>
#define CNT 4
main()
{
	char* p_tbl[] = { "Programming2","Algorithm","Programming1","C" };
	char* w;
	int i, t;
	for (i = 0; i < CNT - 1; i++) {
		for (t = i + 1; t < CNT; t++) {
			if (strcmp(p_tbl[i], p_tbl[t]) > 0) {
				w = p_tbl[i];
				p_tbl[i] = p_tbl[t];
				p_tbl[t] = w;
			}
		}
	}
	for (i = 0; i < CNT; i++) {
		printf("%s\n", p_tbl[i]);
	}
}