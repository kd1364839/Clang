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
		printf("���������(1:�\�� 2:�ǉ� 3:�폜 9:�I��):");
		scanf("%d", &s);
		if (s == 9)break;
		if (s == 1) {
			hyoji(data);
		}
		else {
			if (s == 2) {
				if (han = 1) {
					printf("�e�ʂ��s�����Ă��܂�\n");
				}
				else {
					for (p = data, i = 0; p->name != "END"; p++, i++);
					printf("���O:");
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
	printf("�f�[�^����:%d\n", i - 1);
}