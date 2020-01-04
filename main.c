#include "monty.h"
/**
 * main - Main funtion.
 * @argc: Argc.
 * @av: Argv.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	size_t bsize = 0;
	unsigned int count = 0;
	FILE *one;
	char *buffer = NULL, **token;
	stack_t *head = NULL;

	(void) head;
	if (argc != 2)
	{dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	one = fopen(argv[1], "r");
	if (one == NULL)
	{dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&buffer, &bsize, one) != -1)
	{
		token = pharser(buffer);
		get_op_func(token, &head, count);
		count++;
	}
	fclose(one);
	free(buffer);
	return (0);
}
/**
 *
 *
 */
char **pharser(char *buffer)
{
	const char *delimit =  " \t\n $";
	int i = 0;
	char **tokens;
	char *tok;
	char *dup_token;
	char *first_dup;

	first_dup = strcp(buffer);
	dup_token = strcp(buffer);
	tok = strtok(first_dup, delimit);
	i++;
	while (tok != NULL)
	{
		tok = strtok(NULL, delimit);
		i++;
	}
	tokens = malloc(sizeof(char *) * i);
	i = 0;
	tokens[i] = strtok(dup_token, delimit);
	while (tokens[i] != NULL)
	{
		i++;
		tokens[i] = strtok(NULL, delimit);
	}
	free(first_dup);
	return (tokens);
}

/**
 * strcp - copies one string into a duplicate.
 * @str: string to be duplicated.
 *
 * Return: duplicated string.
 */
char *strcp(char *str)
{
	char *dup = NULL;
	int counter = 0;
	int size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	dup = malloc((size + 1) * sizeof(char));
	while (counter <= size)
	{
		dup[counter] = str[counter];
		counter++;
	}
	return (dup);
}

/**{
	char **token, *tok;
	int i = 0, j = 0;

	tok = strtok(buffer, " \t\n$");
	while (tok != NULL)
	{
		tok = strtok(NULL, " \t\n$");
		j++;
	}
	j = j + 1;
	token = malloc(sizeof(char *) * j);
	token[i] = strtok(buffer, " \t\n$");
	while (token[i] != NULL)
	{
		i++;
		token[i] = strtok(NULL, " \t\n$");
	}
	return (token);
}
*/
