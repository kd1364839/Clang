#include<stdio.h>
main()
{
	int i;
	char data[] = "orange";
	i = 0;
	printf("������:%s\n", data);
	while (data[i] != '\0') {
		i++;
	}
	printf("��������%d����\n", i);
}