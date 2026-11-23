#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int grade, i1, i2;
	char grade_letter;

	printf("Enter your grade: ");
	scanf("%d", &grade);

	if (grade > 100) {
		printf("Invalid grade\n");
		return 0;
	}

	if (grade == 100) {
		grade_letter = 'A';
		printf("Letter grade: %c\n", grade_letter);
		return 0;
	}

	i1 = grade / 10;

	switch(i1) {
	case 9: grade_letter = 'A'; break;
	case 8: grade_letter = 'B'; break;
	case 7: grade_letter = 'C'; break;
	case 6: grade_letter = 'D'; break;
	case 0: default: grade_letter = 'F'; break;
	}

	printf("Letter grade: %c\n", grade_letter);

	return 0;
}