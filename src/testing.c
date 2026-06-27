#include <stdio.h>

void modify_string(char **string, char *new_string) { *string = new_string; }

int main() {
	char *lukeString = "Luke";

	printf("%s\n", lukeString);

	modify_string(&lukeString, "Hello");

	printf("%s\n", lukeString);

	return 0;
}
