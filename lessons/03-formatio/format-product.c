#include <stdio.h>

int main(void)
{
	int item_num, month, day, year;
	float unit_price;

	printf("Enter item number: ");
	scanf("%d", &item_num);

	printf("Enter unit price: ");
	scanf("%f", &unit_price);

	printf("Enter purchase date (MM/DD/YYYY): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\tUnitPrice\tPurchase Date\n");
	printf("%d\t$%.2f\t\t%d/%d/%d\n", item_num, unit_price, month, day, year);
}