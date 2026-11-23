#include <stdio.h>

int main(void)
{
	int i1, i2;
	char *eni1, *eni2;
	printf("Enter two digits: ");
	scanf("%1d%1d", &i1, &i2);

	if (i1 >= 1 && i1 < 2) {
		switch (i2) {
			case 1: printf("You entered the number Eleven\n"); break;
			case 2: printf("You entered the number Twelve\n"); break;
			case 3: printf("You entered the number Thirteen\n"); break;
			case 4: printf("You entered the number Fourteen\n"); break;
			case 5: printf("You entered the number Fifteen\n"); break;
			case 6: printf("You entered the number Sixteen\n"); break;
			case 7: printf("You entered the number Seventeen\n"); break;
			case 8: printf("You entered the number Eighteen\n"); break;
			case 9: printf("You entered the number Nineteen\n"); break;
			case 0: printf("You entered the number Ten\n"); break;
		}
		return 0;
	}

	switch (i1) {
		case 2: eni1 = "Twenty"; break;
		case 3: eni1 = "Thirty"; break;
		case 4: eni1 = "Forty"; break;
		case 5: eni1 = "Fifty"; break;
		case 6: eni1 = "Sixty"; break;
		case 7: eni1 = "Seventy"; break;
		case 8: eni1 = "Eighty"; break;
		case 9: eni1 = "Ninety"; break;
	}

	switch (i2) {
		case 1: eni2 = "-one"; break;
		case 2: eni2 = "-two"; break;
		case 3: eni2 = "-three"; break;
		case 4: eni2 = "-four"; break;
		case 5: eni2 = "-five"; break;
		case 6: eni2 = "-six"; break;
		case 7: eni2 = "-seven"; break;
		case 8: eni2 = "-eight"; break;
		case 9: eni2 = "-nine"; break;
		default: eni2 = ""; break;
	}

	printf("You entered the number %s%s\n", eni1, eni2);
	return 0;
}