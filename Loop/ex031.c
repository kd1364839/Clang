#include<stdio.h>
main()
{
	int no, kai, gokei;
	for (no = 1; no <= 10; no += 1) {
		gokei = 0;
		for (kai = 1; kai <= no; kai += 1) {
			gokei += kai;
		}
		printf("1から%dまでの和=%d\n", no, gokei);
	}
}