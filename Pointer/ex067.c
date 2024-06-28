#include<stdio.h>
#include<string.h>
#define CNT 4
main()
{
	char* p_tbl[] = { "Programming2","Algorithm","Programming1","C" };
	char* w, ** p;
	int i, t;
	p = p_tbl;
	for (i = 0; i < CNT - 1; i++) {
		for (t = i + 1; t < CNT; t++) {
			if (strcmp(*(p+i), *(p+t)) < 0) {
				w = *(p+i);
				*(p+i)=*(p+t);
				*(p+t)=w;
			}
		}
	}
	for (i = 0; i < CNT; i++) {
		printf("%s\n", *(p + i));
	}
}