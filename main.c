#include "monty.h"
/**
 *
 *
 *
 */
int main(int argc, char *argv[])
{
	char buffer[BSIZE];
	int one, i, nn = 5;

	if (argc != 2)
	{dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	one = open(argv[1], O_RDONLY);
	if (one == -1)
	{dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	i = read(one, buffer, BSIZE);
	if (i == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	pharse(buffer);
}
