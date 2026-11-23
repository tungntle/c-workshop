#include <stdio.h>
#include <math.h>

int main(void)
{
	double score, fraction;


	printf("Enter your scores: ");
	scanf("%lf", &score);

	fraction = score - trunc(score);

	if (fraction <= 0.25)
		printf("Your round score is: %.2f\n", trunc(score));
	else if (fraction == 0.5)
		printf ("Your round score is: %.2f\n", score);
	else
		printf("Your round score is: %.2f\n", ceil(score));

	return 0;
}