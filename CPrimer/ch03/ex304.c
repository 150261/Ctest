#include <stdio.h>

int main(void)
{
	float a;
	printf("Please Enter a flat:");
	scanf("%f", &a);

	printf("A float  num:%f\n", a);
	printf("%e\n", a);
	printf("%a\n", a);

	return 0;
}
