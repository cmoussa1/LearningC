#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

	// Exercise 1/16
	char brian[] = "Hello life!";

	printf("%s\n", brian);

	printf("\n");

	// Exercise 2/16
	char caesar[] = "Graham";
	char praline[] = "John";
	char viking[] = "Teresa";

	printf("%s\n", caesar);
	printf("%s\n", praline);
	printf("%s\n", viking);

	printf("\n");

	// Exercise 3/16: Escape Characters
	printf("This isn't flying, this is falling with style!\n");

	printf("\n");

	// Exercise 4/16: Access by Index
	char monty[] = "MONTY";
	char fifth_letter = monty[4];
	printf("%c\n", fifth_letter);

	printf("\n");

	// Exercise 5-7/16: String Methods
	char parrot[] = "Norwegian Blue";
	printf("%lu\n", strlen(parrot));
	for (int i = 0; parrot[i]; i++) {
		parrot[i] = tolower(parrot[i]);
	}
	printf("%s\n", parrot);
	for (int i = 0; parrot[i]; i++) {
		parrot[i] = toupper(parrot[i]);
	}
	printf("%s\n", parrot);

	printf("\n");

	// Exercise 8/16: Convert Number to String
	double pi = 3.14;
	char conv[32];
	sprintf(conv, "%.2lf\n", pi);
	printf("%s", conv);

	printf("\n");

	// Exercise 12/16: String Concatenation
	char spam[] = "Spam";
	char and[] = "and";
	char eggs[] = "eggs";
	printf("%s %s %s\n", spam, and, eggs);

	printf("\n");

	// Exercise 13/16: Explicit String Conversion
	printf("The value of pi is around %.2f\n", pi);

	printf("\n");

	// Exercise 15/16: String Formatting with %
	char name[64];
	printf("What is your name? ");
	fgets(name, 64, stdin);
	name[strlen(name) - 1] = '\0';
	char quest[64];
	printf("What is your quest? ");
	fgets(quest, 64, stdin);
	quest[strlen(quest) - 1] = '\0';
	char color[64];
	printf("What is your favorite color? ");
	fgets(color, 64, stdin);
	color[strlen(color) - 1] = '\0';

	printf("Ah, so your name is %s, your quest is %s, " \
		"and your favorite color is %s.\n", name, quest, color);

	printf("\n");

	// Exercise 16/16: And Now, For Something Completely Familiar
	char my_string[] = "My String";
	printf("%lu\n", strlen(my_string));
	for (int i = 0; my_string[i]; i++) {
		my_string[i] = toupper(my_string[i]);
	}
	printf("%s\n", my_string);

	return 0;
}