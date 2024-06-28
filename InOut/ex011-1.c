#include<stdio.h>
main()
{
	char moji1, moji2;
	moji1 = 'A', moji2 = 'B';
	printf("A:%d 0x%x   B:%d 0x%x\n", moji1, moji1, moji2, moji2);
	moji1 = 'C', moji2 = 'a';
	printf("C:%d 0x%x   a:%d 0x%x\n", moji1, moji1, moji2, moji2);
	moji1 = 'b', moji2 = 'c';
	printf("b:%d 0x%x   c:%d 0x%x\n", moji1, moji1, moji2, moji2);
	moji1 = '0', moji2 = '1';
	printf("0:%d 0x%x   1:%d 0x%x\n", moji1, moji1, moji2, moji2);
	moji1 = '2', moji2 = '!';
	printf("2:%d 0x%x   SP:%d 0x%x\n", moji1, moji1, moji2 - 1, moji2 - 1);
}