#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int main(void) {
	int file = open("./test11", O_RDONLY);

	if (file == -1) {
		perror("open");
		return -1;
	}

	return 0;
}
