#include<stdio.h>
#include<string.h>
void kou(int *p, int size);
void syou(int *p, int size);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 }, i;
	char hou[10];
	printf("ƒ\[ƒg•ûŒü‚ğ“ü—Í:");
	scanf("%s", hou);
	if (strcmp(hou,"~‡") == 0) {
		kou(data, 8);
	}
	else {
		syou(data, 8);
	}
	for (i = 0; i < 8; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
}

void kou(int* p, int size)
{
	int i, t, w;
	for (i = 0; i < size - 1; i++) {
		for (t = i + 1; t < size; t++) {
			if (*(p + i) < *(p + t)) {
				w = *(p + i);
				*(p + i) = *(p + t);
				*(p + t) = w;
			}
		}
	}
	return;
}

void syou(int* p, int size)
{
	int i, t, w;
	for (i = 0; i < size - 1; i++) {
		for (t = i + 1; t < size; t++) {
			if (*(p + i) > *(p + t)) {
				w = *(p + i);
				*(p + i) = *(p + t);
				*(p + t) = w;
			}
		}
	}
	return;
}