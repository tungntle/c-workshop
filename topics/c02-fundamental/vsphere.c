#include <stdio.h>
#define FRACTION 4.0f/3.0f
#define PI 3.14

int main(void)
{
	int r;
	float volume;

	printf("Input your radius: ");
	scanf("%d", &r);

	volume = FRACTION * PI * r * r * r;
	printf("%.1f", volume);
}