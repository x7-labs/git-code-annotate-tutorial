#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define BUF_SIZE	1024
#define TEST_STR	"test"

/*
Unsafe use of strcmp
--------------------

The code listed here uses the strcmp function on a user provided input. Using strmp
is generally considered unsafe see `strcmp <http://no.more.strmp.org>`_


.. code-block:: c

	void parse(char *buf) {
		if (strcmp(buf, TEST_STR))
			printf("parsed test\n");
	}
*/
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
