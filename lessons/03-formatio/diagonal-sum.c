#include <stdio.h>

int main(void)
{
	int one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen;
	printf("Enter the number from 1 to 16 in any order: \n");
	scanf("%d %d %d %d", &one, &two, &three, &four);
	scanf("%d %d %d %d", &five, &six, &seven, &eight);
	scanf("%d %d %d %d", &nine, &ten, &eleven, &twelve);
	scanf("%d %d %d %d", &thirteen, &fourteen, &fifteen, &sixteen);

	printf("%d\t%d\t%d\t%d\n", one, two, three, four);
	printf("%d\t%d\t%d\t%d\n", five, six, seven, eight);
	printf("%d\t%d\t%d\t%d\n", nine, ten, eleven, twelve);
	printf("%d\t%d\t%d\t%d\n", thirteen, fourteen, fifteen, sixteen);

	printf("Row sums: %d %d %d %d\n", one + two + three + four,
		five + six + seven + eight,
		nine + ten + eleven + twelve,
		thirteen + fourteen + fifteen + sixteen);
	printf("Column sums: %d %d %d %d\n",
		one + five + nine + thirteen,
		two + six + ten + fourteen,
		three + seven + eleven + fifteen,
		four + eight + twelve + sixteen);
}