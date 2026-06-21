#include <stdio.h>

#define MAX_IDS 32

int main() {
	int ids[MAX_IDS] = {0};

	printf("For loop in C:\n");

	for (int i = 0; i < MAX_IDS; i++) {
		ids[i] = i + 1;
		printf("Index: %d Value: %d\n", i, ids[i]);
	}

	printf("While loop in C:\n");

	int i = 0;

	while (i < MAX_IDS) {
		ids[i] = i + 2;
		printf("Index: %d Value: %d\n", i, ids[i]);
		i++;
	}

	i = 0;

	do {
		ids[i] = i + 3;
		printf("Index: %d Value: %d\n", i, ids[i]);
		i++;
	} while (i < MAX_IDS);

	return 0;
}
