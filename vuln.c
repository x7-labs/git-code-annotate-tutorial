#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define BUF_SIZE	1024
#define TEST_STR	"test"

void parse(char *buf) {
	if (strcmp(buf, TEST_STR))
		printf("parsed test\n");
}

int main() {
	void *buf = malloc(BUF_SIZE);
	read(0, buf, BUF_SIZE);
	parse((char *)buf);
	return 0;
}
