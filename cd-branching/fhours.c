#include <stdio.h>

int main(void) {
	int hour, minute, hour_12;
	char *time_postfix;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	if (hour > 24 || minute > 60)
	{
		printf("Invalid hour or minutes!\n");
		return 0;
	}

	if (hour >= 12 && hour < 24) {
		time_postfix = "PM";
	}
	else {
		time_postfix = "AM";
	}

	if (hour == 24) {
		hour_12 = 0;
	}
	else if (hour >= 12 && hour < 13) {
		hour_12 = 12;
	}
	else if (hour >= 13) {
		hour_12 = hour - 12;
	}
	else {
		hour_12 = hour;
	}

	printf("Equivalent 12-hour time: %d:%d %s\n", hour_12, minute, time_postfix);
	return 0;
}