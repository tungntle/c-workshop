#include <stdio.h>

int main(void)
{
	int input;
	printf("Enter a number: ");
	scanf("%d", &input);

	if (input >= 0 && input <= 9)
		printf("%d has 1 digit\n", input);
	if (input > 9 && input < 100)
		printf("%d has 2 digit\n", input);
	if (input >= 100 && input <= 1000)
		printf("%d has 3 digit\n", input);

	return 0;
}