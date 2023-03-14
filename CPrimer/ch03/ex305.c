#include <stdio.h>

int main(void)
{
	unsigned int age;
	printf("Please Enter your age:");
	scanf("%d", &age);
	printf("you time is %e\n", age * 3.156e7);

	return 0;
}
