#include <stdio.h>
#include <string.h>

int answer() {
	return 42;
}

int hotel_cost(int nights) {
	return 140 * nights;
}

int plane_ride_cost(char city[]) {
	if (strcmp(city, "Charlotte") == 0) {
		return 183;
	}
	else if (strcmp(city, "Tampa") == 0) {
		return 220;
	}
	else if (strcmp(city, "Pittsburgh") == 0) {
		return 222;
	}
	else if (strcmp(city, "Los Angeles") == 0) {
		return 475;
	}
	else {
		return -1;
	}
}

int rental_car_cost(int days) {
	int cost = days * 40;
	if (days >= 7) {
		cost -= 50;
	}
	else if (days >= 3) {
		cost -= 20;
	}
	return cost;
}

int trip_cost(char city[], int days, int spending_money) {
	int plane = plane_ride_cost(city);
	int hotel = hotel_cost(days - 1);
	int rental_car = rental_car_cost(days);
	int total = plane + hotel + rental_car + spending_money;

	return total;
}

int main() {

	printf("%d\n", answer());
	printf("\n");

	printf("%d\n", trip_cost("Los Angeles", 5, 600));

	return 0;
}