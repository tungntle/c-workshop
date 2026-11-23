#include <stdio.h>

int main(void) {
	int day, start_day, i , j, start_at = 1;
	printf("Enter number of days in month: ");
	scanf("%d", &day);

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start_day);

	j = start_day;
	printf("Sun Mon Tue Wed Thu Fri Sat\n");
	for (i = 1; i <= day; i++) {
		if (start_at < start_day) {
			printf("    ");
			start_at++;
			continue;
		}
		printf("%3d ", i);
		if (j == 7) {
			printf("\n");
			j = 0;
		}
		j++;
	}

	printf("\n");
	return 0;
}