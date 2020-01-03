#include "monty.h"
/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	stack_t *head;
	char buffer[BSIZE];
	int one, i;

	if (argc != 2)
	{dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	f = fopen(argv[1], r);
	if (f == -1)
	{dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	i = read(one, buffer, BSIZE);
}
