#include "monty.h"
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
	int count = 0;
	FILE *one;
	char *buffer = NULL, **token;
	stack_t **head = NULL;

	head = malloc(sizeof(stack_t));
	*head = '\0';
	if (argc != 2)
	{dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	one = fopen(argv[1], "r");
	if (one == NULL)
	{dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((chr = getline(&buffer, &bsize, one)) != -1)
	{
		token = pharser(buffer);
		count++;
		get_op_func(token, head, count);
	}
	free_stack(head);
	free(head);
	free(buffer);
	fclose(one);
	return (0);
}
