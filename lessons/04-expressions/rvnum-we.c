#include <stdio.h>

int main(void)
{
	int i, j, k, z;
	printf("Enter a three-digit number: ");
	scanf("%d", &i);

	j = i / 100;
	k = (i - (j * 100)) / 10;
	z = (i - (j * 100)) % 10;
	printf("The reversal is: %d%d%d\n", z, k, j);
}