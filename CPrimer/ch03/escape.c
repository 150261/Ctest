#include <stdio.h>
//使用转义序列
//
int main(void)
{
	float salary;

	printf("\aEnter you desired monthly salary:");
	printf(" $____\b\b\b\b\b ");
	scanf("%f", &salary);
	printf("\n\t$%.2f a monnth is $%.2f a year.", salary, salary * 12.0);

	printf("\rGee!\n");

	return 0;
}
