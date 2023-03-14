#include <stdio.h>

int main(void)
{
	int n;
	unsigned int wegiht;
	double m;

	printf("Please Enter water wegiht:");
	scanf("%d", &wegiht);
	m = 950 * wegiht;
	n = m / 3,0e-23;
	printf("%d \n", n);

	return 0;
	
}
