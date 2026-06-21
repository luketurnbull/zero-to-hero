#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	if (argc < 2) {
		printf("Please provide a password\n");
		// Early return
		return 0;
	}

	char *password = argv[1];
	char buff[1024];

	printf("Please repeat your password\n");

	scanf("%1023s", buff);

	// if there is NO difference it will return 0
	int charDiff = strcmp(password, buff);

	if (charDiff > 0) {
		printf("The password is not the same\n");
	} else {
		printf("The password is the same!\n");
	}

	printf("%ld\n", strlen(password));
}
