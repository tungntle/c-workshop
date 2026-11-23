#include <stdio.h>

int main(void)
{
	float avg[3], sum = 0.0f;
	int i, excel_count = 0, good_count = 0;

	printf("Enter your high school score in order 10-11-12: ");
	for (i = 0; i < 3; i++)
		scanf("%f", &avg[i]);

	for (i = 0; i < 3; i++) {
		sum += avg[i];

		if (avg[i] >= 8.5)
			excel_count++;
		else if (avg[i] >= 7.0)
			good_count++;

		printf("%.2f ", avg[i]);
	}

	printf("\n");

	if (excel_count == 3) {
		printf("Wonderful! Laptop for you\n");
		return 0;
	}

	if (excel_count >= 2 && good_count >= 1) {
		printf("Congrats! Bicycle for you\n");
		return 0;
	}

	if (sum / 3 >= 6.5) {
		printf("Yeah! Bag for you\n");
		return 0;
	}

	printf("No hope!\n");
	return 0;
}