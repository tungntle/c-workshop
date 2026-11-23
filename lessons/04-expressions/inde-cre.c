#include <stdio.h>

int main(void)
{
	int i = 1;
	int j = 1;
	int k = ++i + ++j;
	printf("k is %d\n", k);
	printf("i is %d\n", ++i);
	printf("j is %d\n", j++);


}