#include<stdio.h>
main()
{
	char data[20] = "Language";
	char* p_data;
	char moji;
	int i;
	p_data = data;
	printf("data[] = %s\n", data);
	printf("����������?");
	scanf("%c", &moji);
	printf("�������ʂ́A");
	for (i = 0; *(p_data + i) != '\0'; i++) {
		if (*(p_data + i) == moji) {
			printf("%d ", i + 1);
		}
	}
	printf("�����ڂł�\n");
}