#include <stdio.h>

int main(void)
{
	int gsi, indentifier, publisher_code, item_num, check_digit;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gsi, &indentifier, &publisher_code, &item_num, &check_digit);

	printf("GSI prefix: %d\n", gsi);
	printf("Group indetifier: %d\n", indentifier);
	printf("Publisher code: %d\n", publisher_code);
	printf("Item number: %d\n", item_num);
	printf("Check digit: %d\n", check_digit);

}