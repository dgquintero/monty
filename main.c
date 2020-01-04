#include "monty.h"
ss sup = {0, NULL, NULL};
/**
 * main - Main funtion.
 * @argc: Argc.
 * @av: Argv.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	ssize_t chr;
	size_t bsize = 0;
	unsigned int count = 0;
	stack_t *head = NULL;

	if (argc != 2)
	{dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	sup.file = fopen(argv[1], "r");
	if (!sup.file)
	{dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((chr = getline(&sup.buffer, &bsize, sup.file)) != -1)
	{
		count++;
		pharser(sup.buffer, &head, count);
	}
	exit(EXIT_SUCCESS);
}
