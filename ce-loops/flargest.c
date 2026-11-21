#include <stdio.h>

int main(void)
{
	float i;
	float largest;
	while (i != 0) {
		printf("Enter a number: ");
		scanf("%f", &i);

		if (i >= largest) {
			largest = i;
		}
	}

	printf("The largest number entered was: %.2f", largest);
}