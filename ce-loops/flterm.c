#include <stdio.h>

int main(void)
{
	int num, denom, remainder, m, n;
	printf("Enter a fraction: ");
	scanf("%d/%d", &num, &denom);

	if (num == 0) {
		printf("Result is 0\n");
		return 0;
	}

	if (denom == 0) {
		printf("Can not divide\n");
		return 0;
	}

	n = num;
	m = denom;

	while (n != 0) {
		remainder = m % n;
		m = n;
		n = remainder;
	}

	printf("In lowest terms: %d/%d\n", num / m, denom / m);

	return 0;
}