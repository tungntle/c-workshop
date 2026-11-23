#include <stdio.h>

int main(void)
{
	int amount, remain, bill_20, bill_10, bill_5, bill_1;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	bill_20 = amount / 20;
	remain = amount - (bill_20 * 20);
	bill_10 = remain / 10;
	remain = remain - (bill_10 * 10);
	bill_5 = remain / 5;
	remain = remain - (bill_5 * 5);
	bill_1 = remain / 1;

	printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d\n", bill_20, bill_10, bill_5, bill_1);
	return 0;
}