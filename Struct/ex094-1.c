#include<stdio.h>
#define NIN 5
struct day {
	int nen;
	int tuki;
	int niti;
};
struct profile {
	char name[20];
	struct day date;
	char blood[5];
};
main()
{
	struct profile data[NIN] = { {"A",2001,1,1,"A"},
								 {"B",2002,2,2,"B"},
								 {"C",2003,3,3,"O"},
								 {"D",2004,4,4,"AB"},
								 {"E",2005,5,5,"A"} };
	struct profile* p;
	int i;
	for (p = data, i = 0; i < NIN; p++, i++) {
		if (p->date.tuki == 2) {
			printf("%s--%d”N%dŒŽ%d“ú¶‚Ü‚ê@ŒŒ‰tŒ^-%sŒ^\n",
				p->name,
				p->date.nen, p->date.tuki, p->date.niti,
				p->blood);
		}
	}
}