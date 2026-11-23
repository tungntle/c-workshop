#include <stdio.h>

int main(void)
{
	int n, m, remainder, gcd;

	printf("Enter two integers: ");
	scanf("%d %d", &n, &m);

	if (n == 0) {
		gcd = m;
		printf("%d contains GCD\n", gcd);
		return 0;
	}

	while (n != 0) {
		remainder = m % n;
		m = n;
		n = remainder;
	}

	printf("%d is GCD\n", m);
	return 0;
}