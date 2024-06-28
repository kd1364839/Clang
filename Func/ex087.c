#include<stdio.h>
main(int argc, char* argv[])
{
	int a, b, c;
	if (argc == 3) {
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a + b;
		printf("%d + %d = %d", a, b, c);
	}
	else {
		printf("ÉGÉâÅ[");
	}
}