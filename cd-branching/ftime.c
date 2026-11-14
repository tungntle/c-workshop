#include <stdio.h>

int main(void)
{
	int hour, minute, hour_12, time_postfix,
		expressed_min, closest_departure, result_hour, result_min,
		a8, a943, a1119, p1247, p14, p1545, p19, p2145;

	a8 = 8 * 60;
	a943 = 9 * 60 + 43;
	a1119 = 11 * 60 + 19;
	p1247 = 12 * 60 + 47;
	p14 = 14 * 60;
	p1545 = 15 * 60 + 45;
	p19 = 19 * 60;
	p2145 = 21 * 60 + 45;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	expressed_min = hour * 60 + minute;

	if (expressed_min >= a8 && expressed_min <= a943) {
		if (expressed_min - a8 > a943 - expressed_min) closest_departure = a943;
		else closest_departure = a8;
	}
	else if (expressed_min > a943 && expressed_min <= a1119) {
		if (expressed_min - a943 > a1119 - expressed_min) closest_departure = a1119;
		else closest_departure = a943;
	}
	else if (expressed_min > a1119 && expressed_min <= p1247) {
		if (expressed_min - a1119 > p1247 - expressed_min) closest_departure = p1247;
		else closest_departure = a1119;
	}
	else if (expressed_min > p1247 && expressed_min <= p14) {
		if (expressed_min - 1247 > p14 - expressed_min) closest_departure = p14;
		else closest_departure = p1247;
	}
	else if (expressed_min > p14 && expressed_min <= p1545) {
		if (expressed_min - p14 > p1545 - expressed_min) closest_departure = p1545;
		else closest_departure = p14;
	}
	else if (expressed_min > p1545 && expressed_min <= p19) {
		if (expressed_min - p1545 > p19 - expressed_min) closest_departure = p19;
		else closest_departure = p1545;
	}
	else if (expressed_min > p19 && expressed_min < p2145) {
		if (expressed_min - p19 > p2145 - expressed_min) closest_departure = p2145;
		else closest_departure = p19;
	}
	else
		closest_departure = p2145;


	result_hour = closest_departure / 60;
	result_min = closest_departure - (result_hour * 60);

	printf("Closest departure: %d:%d\n", result_hour, result_min);
}