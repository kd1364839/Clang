#include<stdio.h>
#include<string.h>
struct DATA {
	char name[20];
};
void hyoji(struct DATA* p);
main()
{
	struct DATA data[20];
	struct DATA* p;
	strcpy(data[0].name, "END");
	int s, i, han;
	han = 0;
	do {
		printf("整数を入力(1:表示 2:追加 3:削除 9:終了):");
		scanf("%d", &s);
		if (s == 9)break;
		if (s == 1) {
			hyoji(data);
		}
		else {
			if (s == 2) {
				if (han = 1) {
					printf("容量が不足しています\n");
				}
				else {
					for (p = data, i = 0; p->name != "END"; p++, i++);
					printf("名前:");
					gets(p->name);
					p++;
					p->name = { "END" };
					if (i + 1 >= 19) {
						han = 1;
					}
				}
			}
			else {
				
			}
		}
	} while (1);
}

void hyoji(struct DATA* p)
{
	int i;
	for (i = 0; p->name != "END", p++, i++) {
		printf("%c\n", p->name);
	}
	printf("データ件数:%d\n", i - 1);
}