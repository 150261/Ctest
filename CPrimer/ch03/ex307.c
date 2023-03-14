#include <stdio.h>
int main(void)
{
	unsigned int hegiht;
	printf("Please Enter your hegiht(im):");
	scanf("%d", &hegiht);
	printf("%.2fcm\n", hegiht * 2.54);
	return 0;
}
