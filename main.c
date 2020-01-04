#include "monty.h"
/**
 * main - Main funtion.
 * @argc: Argc.
 * @argv: Argv.
 * Return: 0.
 */
int main(int argc, char *av[])
{
	size_t bsize = 32;
	unsigned int count = 0;
	FILE *one;
	char *token = NULL, *buffer = NULL, *argv[32];
	stack_t *head = NULL;

	(void) head;
	if (argc != 2)
	{dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	one = fopen(av[1], "r");
	if (one == NULL)
	{dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &bsize, one) != -1)
	{
		if (*buffer != '\n')
		{
			token = strtok(buffer, "\t\n\r");
			get_op_func(token, &head, count);
		}
		count++;
	}
	return (0);
}
