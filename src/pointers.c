#include <stdio.h>
#include <string.h>

#define MAX_IDS 5

void setme(int *arr, int index, int val) { arr[index] = val; }

int main() {
	int ids[MAX_IDS];
	memset(&ids, '\0', sizeof(ids));

	setme(ids, 1, 44);

	// printf("%d\n", ids[1]);

	int x = 0x1234;

	printf("Original x value: %x\n", x);

	// Pointer that references the address of x
	int *pX = &x;

	printf("Pointer address: %p\nPointer value: %x\n", pX, *pX);

	// Updating the pointer means we are updating the original x
	// Since the pointer is only a reference to that memories address
	*pX = 0x4444;

	printf("Pointer address: %p\nPointer value: %x\n", pX, *pX);
	printf("New x value: %x\n", x);
}
