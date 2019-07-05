#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main() {
	
	
	// Exercise 3/15: Compare... Closlier!
	bool bool1, bool2, bool3, bool4, bool5;
	if ((20 - 10) > 15) {
		bool1 = false;
		printf("False\n");
	}
	if ((10 + 17) == pow(3, 16)) {
		bool2 = false;
		printf("False\n");
	}
	if (pow(1, 2) <= -1) {
		bool3 = false;
		printf("False\n");
	}
	if ((40 * 4) >= -4) {
		bool4 = true;
		printf("True\n");
	}
	if (100 != pow(10, 2)) {
		bool5 = false;
		printf("False\n");
	}

	printf("\n");

	// Exercise 4/15: How the Tables Have Turned
	printf("%d\n", 3 < 5); 
	printf("%d\n", 2 < 1);
	printf("%d\n", 5 > 1);
	printf("%d\n", pow(10,2) > pow(10,3));
	printf("%d\n", pow(2,2) > sqrt(4));

	printf("\n");

	// Exercise 6/15: And
	bool1 = false && false;
	bool2 = -(-(-(-2))) == -2 && 4 >= pow(16, 0.5);
	bool3 = 19 % 4 != 300 / 10 / 10 && false;
	bool4 = -pow(1, 2) < pow(2, 0) && 10 % 10 <= 20 - 10 * 2;
	bool5 = true && true;

	printf("%d\n", bool1);
	printf("%d\n", bool2);
	printf("%d\n", bool3);
	printf("%d\n", bool4);
	printf("%d\n", bool5);

	printf("\n");

	// Exercise 7/16: Or
	bool1 = pow(2, 3) == 108 % 100 || \
		strlen("Clesse") == strlen("King Arthur");
	bool2 = true || false;
	bool3 = pow(100, 0.5) >= 50 || false; 
	bool4 = true || true;
	bool5 = pow(1, 100) == pow(100, 1) || 3 * 2 * 1 != 3 + 2 + 1; 

	printf("%d\n", bool1);
	printf("%d\n", bool2);
	printf("%d\n", bool3);
	printf("%d\n", bool4);
	printf("%d\n", bool5);

	printf("\n");

	// Exercise 8/16: Not
	bool1 = !true;
	bool2 = !(pow(3, 4) < pow(4, 3));
	bool3 = !((10 % 3) <= (10 % 2));
	bool4 = !(pow(3, 2) + pow(4, 2) != pow(5, 2));
	bool5 = !!false;

	printf("%d\n", bool1);
	printf("%d\n", bool2);
	printf("%d\n", bool3);
	printf("%d\n", bool4);
	printf("%d\n", bool5);

	printf("\n");

	// Exercise 12/15: If You're Having...
	if (true) {
		printf("Success #1\n");
	}
	if (pow(2, 2) > 3) {
		printf("Success #2\n");
	}

	printf("\n");

	// Exercise 14/15: I Got 99 Problems, But a Switch Ain't One
	int answer = 4;
	if (answer > 5) {
		printf("1\n");
	}
	else if (answer < 5) {
		printf("-1\n");
	}
	else {
		printf("0\n");
	}

	printf("\n");

	// Exercise 15/15: The Big If
	int grade = 92;
	if (grade >= 90) {
		printf("A\n");
	}
	else if (grade >= 80) {
		printf("B\n");
	}
	else if (grade >= 70) {
		printf("C\n");
	}
	else if (grade >= 65) {
		printf("D\n");
	}
	else {
		printf("F\n");
	}

	printf("\n");


	return 0;
}