#include<stdio.h>
main()
{
	int i, no, k[20];
	char s[20];
	printf("������:");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]�̕������L�[:",i);
		scanf("%d", &no);
		k[i] = no;
		s[i] = s[i] - no;
	}
	printf("�������ςݕ�����:%s\n",s);
}