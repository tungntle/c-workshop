#include <stdio.h>

int main(void)
{
	int height = 8;
	int length = 12;
	int width = 10;
	int volume = height * length * width;
	float profit = 2150.48f;

	printf("To C, or not to C: that is the question. \n");
	printf("Height: %d\nLength: %d\nWidth: %d\nVolume: %d\n", height, length, width, volume);
	printf("Profit: $%.2f\n", profit);
	return 0;
}