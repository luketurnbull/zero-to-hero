#include <stdio.h>
#include <stdlib.h>

typedef enum {
	CASUAL,
	PERMANENT,
} contract_t;

struct employee_t {
	int id;
	char *name;
	contract_t contract_type;
};

struct employee_t generate_employee(char *name, contract_t contract_type) {
	static int numberEmployees = 0;
	numberEmployees++;

	struct employee_t new_employee = {
		.id = numberEmployees,
		.name = name,
		.contract_type = contract_type,
	};

	return new_employee;
}

int main() {
	int numOfEmployees = 4;

	struct employee_t *employees =
		malloc(sizeof(struct employee_t) * numOfEmployees);

	if (employees == NULL) {
		printf("Allocation failed");
		return -1;
	}

	employees[0] = generate_employee("Dave", CASUAL);
	employees[1] = generate_employee("Luke", CASUAL);
	employees[2] = generate_employee("Kristen", PERMANENT);
	employees[3] = generate_employee("Bevin", PERMANENT);

	printf("Name: %s, ID: %i, Contract: %i\n", employees[3].name,
		   employees[3].id, employees[3].contract_type);

	free(employees);
	employees = NULL;

	return 0;
}
