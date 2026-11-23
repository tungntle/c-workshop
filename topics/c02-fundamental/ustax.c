#include <stdio.h>
#define USTAX 0.05f


int main(void)
{
	float us_amount;
	float tax_added;

	printf("Enter US amount: ");
	scanf("%f", &us_amount);

	tax_added = us_amount + us_amount * USTAX;
	printf("With tax added: $%.2f", tax_added);
}