/*
Name: Giseok Choi
Student Number: 110456183
Email: gchoi13@myseneca.ca or edgar.choi.13@gmail.com
Date: 2019-10-05
*/
#include <stdio.h>
#define NUMS 4 // 
int main(void)
{
	int high_temperature = 0;
	int low_temperature = 0;
	int total_high_temp = 0;
	int total_low_temp = 0;
	double average_total = 0;
	int highest_temp = 0;
	int lowest_temp = 0;
	printf("---=== IPC Temperature Analyzer ===---");
	for (int i = 1; i <= NUMS; i++) {
		printf("\nEnter the high value for day %d: ", i);
		scanf_s("%d", &high_temperature);
		printf("\nEnter the low value for day %d: ", i);
		scanf_s("%d", &low_temperature);

		if ((low_temperature < -40) || (high_temperature > 40) || (high_temperature < low_temperature)) {
			printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("\nEnter the high value for day %d: ", i);
			scanf_s("%d", &high_temperature);
			printf("\nEnter the low value for day %d: ", i);
			scanf_s("%d", &low_temperature);
		}
		total_high_temp = total_high_temp + high_temperature;
		total_low_temp = total_low_temp + low_temperature;
	}
	average_total = ((double)total_high_temp + (double)total_low_temp) / NUMS*2;
	printf("\nThe average (mean) temperature was: %0.2lf", average_total);

}
