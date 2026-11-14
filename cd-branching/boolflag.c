#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool flag;
	flag = false;

	if (flag == false) printf("Flag value is false\n");
	flag = true;
	if (flag == true) printf("Flag value is true\n");
}