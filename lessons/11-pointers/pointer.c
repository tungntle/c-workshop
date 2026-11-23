#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part)
{
	*int_part = (long) x;
	*frac_part = x -  *int_part;
}

int main(void)
{
	double i = 3.14;
	long *ptr, in_val = 0;
	double *q_ptr, frac_val = 0.0;

	ptr = &in_val;
	q_ptr = &frac_val;

	decompose(i, ptr, q_ptr);

	printf("ptr address = %p, q_ptr = %p\n", ptr, q_ptr);
}

