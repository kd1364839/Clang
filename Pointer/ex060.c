#include<stdio.h>
main()
{
	char data[20] = "Language";
	char* p_data;
	char moji;
	int i;
	p_data = data;
	printf("data[] = %s\n", data);
	printf("検索文字は?");
	scanf("%c", &moji);
	printf("検索結果は、");
	for (i = 0; *(p_data + i) != '\0'; i++) {
		if (*(p_data + i) == moji) {
			printf("%d ", i + 1);
		}
	}
	printf("文字目です\n");
}