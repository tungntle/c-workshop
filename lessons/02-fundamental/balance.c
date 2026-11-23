#include <stdio.h>

int main(void)
{
	float balance, interest, monthly_interest, monthly_payment, first_balance, second_balance, third_balance;

	printf("Enter amount of loan: ");
	scanf("%f", &balance);

	printf("Enter amount of interest: ");
	scanf("%f", &interest);

	printf("Enter monthly payment: ");
	scanf("%f", &monthly_payment);

	monthly_interest = interest / 12 / 100;
	printf("Monthly interest: %.2f\n\n", monthly_interest);

	first_balance = (balance * (1 + monthly_interest)) - monthly_payment;
	printf("Balance remaining after first payment: %.2f\n", first_balance);

	second_balance = (first_balance * (1 + monthly_interest)) - monthly_payment;
	printf("Balance remaining after second payment: %.2f\n", second_balance);

	third_balance = (second_balance * (1 + monthly_interest)) - monthly_payment;
	printf("Balance remaining after third payment: %.2f\n", third_balance);
	return 0;
}