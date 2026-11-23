#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	double test[4], avg_12, avg_test, avg_final, sum = 0.0;
	double *p_lit = &test[0], *p_mat = &test[1],
		   *p_eng = &test[2], *p_sci = &test[3];
	bool is_passed = true, is_excel = true, is_good = true, is_valid = true;
	int i;


	printf("Enter your score in order lit/mat/eng/sci: ");
	for (i = 0; i < 4; i++)
		scanf("%lf", &test[i]);

	for (i = 0; i < 4; i++) {
		if (test[i] < 0 || test[i] > 10)
			is_valid = false;
	}

	if (is_valid == false) {
		printf("Invalid test score input!\n");
		return 0;
	}

	printf("Enter your average in 12th grade: ");
	scanf("%lf", &avg_12);

	if (avg_12 < 0 || avg_12 > 10) {
		printf("Invalid average 12th grade!\n");
		return 0;
	}

	for (i = 0; i < 4; i++) {
		sum += test[i];

		if (test[i] <= 1)
			is_passed = false;

		if (test[i] < 6.5)
			is_excel = false;
		else if (test[i] < 5.0)
			is_good = false;
	}


	printf("%-5s | %-5s | %-5s | %-5s | %-5s\n",
		"Lit", "Mat", "Eng", "Sci", "Sum");
	printf("%-5.2f | %-5.2f | %-5.2f | %-5.2f | %-5.2f\n",
		*p_mat, *p_lit, *p_eng, *p_sci, sum);


	avg_test = sum / 4;
	avg_final = (avg_12 * 0.3) + (avg_test * 0.7);

	printf("\nAvgt| Final| Result\n");
	printf("%.2f|  %.2f| ", avg_test, avg_final);

	if (avg_final <= 5.0 || is_passed == false) {
		printf("Failed\n");
		return 0;
	}

	if (avg_final >= 8.0 && is_excel == true)
		printf("Excel!\n");
	else if (avg_final >= 6.5 && is_good == true)
		printf("Good!\n");
	else
		printf("Mediocore!\n");

	return 0;

}