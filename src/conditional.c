#include <stdio.h>

int main() {
	int temp;
	printf("What temperature is it?\n");
	scanf("%d", &temp);

	if (temp > 30) {
		printf("It's hot\n");
	} else if (temp > 10) {
		printf("It's mild\n");
	} else {
		printf("It's cold\n");
	}

	return 0;
}
