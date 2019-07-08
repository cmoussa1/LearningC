#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {

	// Exercise 2/11: Ahoy! (or Should I Say Ahoyay!)
	printf("Pig Latin\n");

	// Exercise 3/11: Input!
	char original[64];
	printf("Enter a word: ");
	fgets(original, 64, stdin);
	original[strlen(original) - 1] = '\0';

	// Exercise 7/11: Ay B C
	char pyg[] = "ay";

	// Exercise 4-11/11: Check Yourself!
	bool only_letters = false;
	for (int i = 0; i < strlen(original); i++) {
		if (isalpha(original[i]) == 0) {
			only_letters = false;
		}
		else {
			only_letters = true;
		}
	}

	if (strlen(original) > 0 && only_letters == true) {
		printf("You entered: %s\n", original);

		char word[64] = "";
		strcpy(word, original);

		for (int i = 0; i < strlen(original); i++) {
			word[i] = tolower(original[i]);
		}
		char tmp = word[0];
		char first[2] = {tmp, '\0'};

		char new_word[80];
		strcpy(new_word, word);
		strcat(new_word, first);
		strcat(new_word, pyg);

		printf("Pig Latin translation: ");

		for (int i=1; i < strlen(new_word); i++) {
			printf("%c", new_word[i]);
		}
		printf("\n");


	}
	else {
		printf("empty\n");
	}





	return 0;

}