#include <stdio.h>
#include <stdlib.h>

typedef enum {
	STATUS_GOOD,
	STATUS_BAD,
} result_t;

struct Cat {
	unsigned int id;
	char *name;
	unsigned int age;
};

struct Cat initialise_cats(char *name, unsigned int age) {
	static int catIdIncrement = 1;

	struct Cat new_cat = {
		.id = catIdIncrement,
		.name = name,
		.age = age,
	};

	return new_cat;
}

result_t rename_cat(struct Cat *cat, char *new_name) {
	if (cat == NULL) {
		return STATUS_BAD;
	}

	cat->name = new_name;

	return STATUS_GOOD;
};

int main() {
	struct Cat *cats = malloc(sizeof(struct Cat) * 2);

	if (cats == NULL) {
		printf("Allocation failed!");
		return -1;
	}

	cats[0] = initialise_cats("Terry", 2);
	cats[1] = initialise_cats("John", 9);

	rename_cat(&cats[0], "Tom");

	printf("%s\n", cats[0].name);

	free(cats);
	cats = NULL;
	return 0;
}
