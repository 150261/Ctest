#include <stdio.h>
//打印类型大小
//
int main(void)
{
	printf("Type int has a size of %zd bytes. \n", sizeof(int));
	printf("Type char has a size of %zd bytes. '\n", sizeof(char));
	printf("Type doube has a size of %zd bytes. \n", sizeof(double));
	printf("Type float has a size of %zd bytes. \n", sizeof(float));
	printf("Type long has a size of %zd bytes. '\n", sizeof(long));
	printf("Type long double has a size of %zd bytes. \n", sizeof(long double));
	printf("Type long long has a size of %zd bytes. \n", sizeof(long long));
	return 0;
}
