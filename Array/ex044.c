#include<stdio.h>
main()
{
	int i;
	char moji1[100], moji2[100], hako[100];
	printf("������P�����:");
	scanf("%s", moji1);
	printf("������Q�����:");
	scanf("%s", moji2);
	printf("moji1 = %s\tmoji2 = %s\n", moji1, moji2);
	for (i = 0; hako[i] = moji1[i]; i++);
	for (i = 0; moji1[i] = moji2[i]; i++);
	for (i = 0; moji2[i] = hako[i]; i++);
	printf("����ւ����\nmoji1 = %s\tmoji2 = %s\n", moji1, moji2);
}