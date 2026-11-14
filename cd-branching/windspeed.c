#include <stdio.h>

int main(void)
{
	int windspeed;
	printf("Enter a wind speed: ");
	scanf("%d", &windspeed);

	if (windspeed < 1) printf("Calm\n");
	else if (windspeed >= 1 && windspeed <=3) printf("Light air\n");
	else if (windspeed > 3 && windspeed <= 27) printf("Breeze\n");
	else if (windspeed > 27 && windspeed <= 47) printf("Gale\n");
	else if (windspeed > 47 && windspeed <= 63) printf("Storm\n");
	else printf("Hurricane\n");
}