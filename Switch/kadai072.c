#include<stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g?");
	scanf("%c", &moji);
	switch (moji)
	{
	case 'a':
		printf("America\nAustralia");
		break;
	case 'e':
		printf("England\n");
		break;
	case 'f':
		printf("France\n");
		break;
	case 'j':
		printf("Japan\n");
		break;
	}
}