#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

// Exercise 2/19: Function Junction
void spam() {
	printf("Eggs!\n");
}

// Exercise 3/19: Call and Response
void square(int n) {
	int squared = pow(n, 2);
	printf("%d squared is %d.\n", n, squared);
}

// Exercise 4/19: Parameters and Arguments
void power(int base, int exponent) {
	int result = pow(base, exponent);
	printf("%d to the power of %d is %d.\n", base,\
		exponent, result);
}

// Exercise 5/19: Functions Calling Functions
int one_good_turn(int n) {
	return n + 1;
}

int deserves_another(int n) {
	return one_good_turn(n) + 2;
}

// Exercise 6/19: Practice Makes Perfect
int cube(int number) {
	int cubed = pow(number, 3);
	
	return cubed;
}

int by_three(int number) {
	if (number % 3 == 0) {
		return cube(number);
	}
	else {
		return 0;
	}
}

char * shut_down(char s[]) {
	char * ret_mesg;
	ret_mesg = malloc(sizeof(char) * 32);

	if (strcmp(s, "yes") == 0) {
		ret_mesg = "Shutting down\n";
		return (char *) ret_mesg;
	}
	else if (strcmp(s, "no") == 0) {
		ret_mesg = "Shutdown aborted\n";
		return (char *) ret_mesg;
	}
	else {
		ret_mesg = "Sorry\n";
		return (char *) ret_mesg;
	}
}

int main() {
	spam();
	printf("\n");

	square(10);
	printf("\n");

	power(37, 4);
	printf("\n");

	int res1 = one_good_turn(1);
	int res2 = deserves_another(1);
	printf("%d, %d\n", res1, res2);
	printf("\n");

	res1 = by_three(9);
	res2 = by_three(5);
	printf("%d, %d\n", res1, res2);
	printf("\n");

	char * res3, * res4, * res5;
	res3 = shut_down("yes");
	res4 = shut_down("no");
	res5 = shut_down("bad input");
	printf("%s%s%s", res3, res4, res5);
	printf("\n");

	return 0;
}