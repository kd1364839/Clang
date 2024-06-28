#include<stdio.h>
main()
{
	int no1, no2, kekka;
	char ope;
	printf("®”1?");
	scanf("%d", &no1);
	printf("®”2?");
	scanf("%*c%d", &no2);
	printf("‰‰Zq?");
	scanf("%*c%c", &ope);
	switch (ope) 
	{
	    case '+':
		    kekka = no1 + no2;
			//break;
	    case '-':
		    kekka = no1 - no2;
			//break;
	    case '*':
		    kekka = no1 * no2;
			//break;
	    case '/':
		    kekka = no1 / no2;
			//break;
		case '%':
			kekka = no1 % no2;
			//break;
	}
	printf("%d %c %d = %d\n", no1, ope, no2, kekka);
}