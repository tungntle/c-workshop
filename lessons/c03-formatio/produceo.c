#include <stdio.h>

int main(void)
{
	float x = 2.345f;
	int y, z, k = 0;

	printf("Exercise 1: See how things display by printf");
	printf("%6d, %4d", 86, 1040);
	printf("%12.5e", 30.253);
	printf("%.4f", 83.162);
	printf("%-6.2g", .0000009979);

	printf("\nExercise 2: Format exponential notation\n");
	printf("+8, 1 digit: |%8.1f|\n", x);
	printf("-10, 6 digits: |%-10.6f|\n", x);
	printf("+8, 3 digits: |%8.3f|\n", x);
	printf("-6, 0 digits: |%-6.0f|\n", x);

	printf("\nExercise 3: Is there anything difference\n");

	printf("Input z y k: ");
	scanf("%d -%d -%d", &y, &z, &k);
	printf("Will print: %d %d %d", y, z, k);

}