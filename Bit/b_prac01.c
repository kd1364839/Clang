#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_num 3
#define Mob_Num 3
enum BitState
{
	Base      = 0,     //00000000�@�ʏ���
	Poison    = 1 << 0,//00000001�@�ŏ��
	Sleep     = 1 << 1,//00000010�@������
	Paralysis = 1 << 2,//00000100�@�}�q���
	Burn      = 1 << 3,//00001000�@�₯�Ǐ��
	AtkUp     = 1 << 4,//00010000�@�U���̓A�b�v���
	AtkDown   = 1 << 5,//00100000�@�U���̓_�E�����
	Dead	  = 1 << 6,//01000000  ���S�t���O
	Atk_Skill = 1 << 7 //10000000  
};

typedef struct {
	char name[20];
	int type;
	int use_mp;
	int effect;
};

typedef struct {
	char name{ 20 };
	int hp;
	int atk;
	int def;
	UINT state; 
}; Spec;

typedef struct { //Chara�^�\����
	Spec sp;     //Spec�^�\���̕ϐ�
	int maxhp;
	int mp;
	Skill skl[Skil ? num];
}; Chara;

typedef struct {
	Spec sp;
	int rate;
}; Mob;

int TurnCount = 0;

typedef unsigned int UINT;
void DisplayStatus(Chara s);
void BattleMode(Chara* c, Mob m);
int DisplayMenu(void);
int SkillMenu(Chara c);
int DamageCalc(Spec sp1, Spec sp2);
void BattleMessage(Spec sp1, Spec* sp2);

main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s)
{
	printf("*****���݂̏��*****\n");
	if (s & Poison) {
		printf("��\n");
	}
	if (s & Sleep) {
		printf("����\n");
	}
	if (s & Paralysis) {
		printf("�}�q\n");
	}
	if (s & Burn) {
		printf("�₯��\n");
	}
	if (s & AtkUp) {
		printf("�U���̓A�b�v\n");
	}
	if (s & AtkDown) {
		printf("�U���̓_�E��\n");
	}
	if (s == Base) {
		printf("�������\n");
	}
	printf("***************\n");
}

void ChangeFlag(UINT* s)
{
	int a;
	while (1) {
		printf("�ǂ̏�Ԃɂ��܂���?\n");
		printf("1:�� 2:���� 3:�}�q 4:�₯�� 5:�U���� 6:�U���� 0:�I��>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:
			break;
		}
	}
}

void ClearFlag(UINT* s) 
{
	int a;
	while (1) {
		printf("�ǂ̏�Ԃ��������܂���?\n");
		printf("1:�� 2:���� 3:�}�q 4:�₯�� 5:�U���� 6:�U���� 0:�I��>");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		default:
			break;
		}
	}
}