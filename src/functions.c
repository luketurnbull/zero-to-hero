#include <stdbool.h>
#include <stdio.h>

typedef enum { RESULT_SUCCESS, RESULT_FAILURE } result_t;

result_t setPointerValueToZero(int *pointer) {
	if (pointer == NULL) {
		return RESULT_FAILURE;
	}

	*pointer = 0;
	return RESULT_SUCCESS;
}

// isEven
bool isEven(int x) {
	bool result = x % 2 == 0;
	return result;
}

int main() {
	printf("%b\n", isEven(1));
	printf("%b\n", isEven(2));

	result_t res = RESULT_SUCCESS;

	int x = 1337;

	res = setPointerValueToZero(&x);

	if (res == RESULT_FAILURE) {
		printf("Function failed\n");
	} else {
		printf("Pointer set to zero\n");
	}

	return 0;
}
