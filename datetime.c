#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	// Exercise 2/6: Getting the Current Date and Time
	time_t current_time;
	char* c_time_string;

	current_time = time(NULL);
	c_time_string = ctime(&current_time);

	(void) printf("Current time is %s\n", c_time_string);


	// Exercise 3/6: Extracting Information
	time_t now;
	time(&now);
	struct tm *local = localtime(&now);

	int hours, minutes, seconds, day, month, year;

	hours = local->tm_hour;
	minutes = local->tm_min;
	seconds = local->tm_sec;
	day = local->tm_mday;
	month = local->tm_mon + 1;
	year = local->tm_year + 1900;

	printf("%d\n", year);
	printf("%d\n", month);
	printf("%d\n", day);

	printf("\n");

	// Exercise 4/6: Hot Date
	printf("%02d/%02d/%04d\n", month, day, year);

	printf("\n");

	// Exercise 5/6: Pretty Time
	printf("%02d:%02d:%02d\n", hours, minutes, seconds);

	printf("\n");

	// Exercise 6/6 Grand Finale
	printf("%02d/%02d/%04d %02d:%02d:%02d\n", month, day, \
		year, hours, minutes, seconds);

	return 0;
}