#include <stdio.h>

int main(void)
{
	int i = 1, n = 10;
	while (i < n) {
		i = i * 2;
	}

	printf("i: %d\n", i);
}