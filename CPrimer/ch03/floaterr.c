#include <stdio.h>
//浮点数舍入错误

int main(void)
{
	float a, b;
	b= 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("%f \n", a);

	return 0;
}

