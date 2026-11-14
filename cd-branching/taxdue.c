#include <stdio.h>

int main(void)
{
	float income, amount_over, taxdue;
	printf("Enter the emount of taxable income: ");
	scanf("%f", &income);

	amount_over = income - 750;

	if (income <= 750)
		taxdue = income * 0.01;
	else if (income > 750 && income < 2250)
		taxdue = 7.50 + (amount_over * 0.02);
	else if (income >= 2250 && income < 3750)
		taxdue = 37.50 + (amount_over * 0.03);
	else if (income >= 3750 && income < 5250)
		taxdue = 82.50 + (amount_over * 0.04);
	else if (income >= 5250 && income < 7000)
		taxdue = 142.50 + (amount_over * 0.05);
	else
		taxdue = 230.00 + (amount_over * 0.06);

	printf("Your income is: $%.2f\n", income);
	printf("Your tax on the amount over income: %.2f\n", amount_over);
	printf("Your tax due is: $%.2f\n", taxdue);
}