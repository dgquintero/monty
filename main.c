#include "monty.h"
/**
 * main - Main funtion.
 * @ac: Argc.
 * @av: Argv.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	size_t bsize = 64;
	char *token = NULL, *buffer = NULL, *av[32];
        int i, chr;
	FILE *one;

	if (argc != 2)
	{dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	one = fopen(argv[1], "r");
	if (one == NULL)
	{dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	chr = getline(&buffer, &bsize, one);
	if (chr == -1)
	{
		free(buffer);
		return (0);
	}
	token = strtok(buffer, " \t\n\r");
	for (i = 0; i < 32 && token != NULL; i++)
        {
		argv[i + 1] = token;
		token = strtok(NULL, " \t\n\r");
        }
        av[i] = NULL;
	(void) av;
        get_op_func(av);

	return (0);
}
