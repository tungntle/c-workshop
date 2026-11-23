#include <stdio.h>

int main(void)
{
	int x, result;

	printf("Calculate 3x^5 + 2x^4 - 5x^3 -x^2 + 7x - 6\n");

	printf("Enter x: ");
	scanf("%d", &x);

	result = ((((3 * x + 2) * x -5) * x - 1) * x + 7) * x - 6;
	printf("Result: %d", result);
	return 0;
}