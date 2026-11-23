#include <stdio.h>

int main(void)
{
	int day, month, year;

	printf("Enter your birthday (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &day, &month, &year);

	if (day < 1 || day > 31) {
		printf("Invalid day!\n");
		return 1;
	}

	if (month < 1 || month > 12 ) {
		printf("Invalid month!\n");
		return 1;
	} else if (month == 2 && day > 29) {
		printf("Invalid day in Febuary!\n");
		return 1;
	}

	if (year < 1950 || year > 2019) {
		printf("Invalid year!\n");
		return 1;
	}

	printf("Your birthday is: %d/%d/%d\n", day, month, year);
}