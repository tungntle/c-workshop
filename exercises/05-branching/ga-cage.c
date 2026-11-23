#include <stdio.h>

int main(void)
{
	int age;
	int* p_age;

	p_age = &age;

	printf("Enter your age: ");
	scanf("%d", p_age);

	if (*p_age >= 18)
		printf("Enough age to drive\n");
	else
		printf("Not enough age to drive\n");

}