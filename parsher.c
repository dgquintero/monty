#include "monty.h"
/**
 * main - Main funtion.
 * @argc: Argc.
 * @av: Argv.
 * Return: 0.
 */
char **pharser(char *buffer)
{
	int i = 0;
	char **token, *tok, *dup, *first;

	first = strdup(buffer);
	dup = strdup(buffer);
	tok = strtok(first, " \t\n $");
	i++;
	while (tok != NULL)
	{
		tok = strtok(NULL, " \t\n $");
		i++;
	}
	token = malloc(sizeof(char *) * i);
	i = 0;
	token[i] = strtok(dup, " \t\n $");
	while (token[i] != NULL)
	{
		i++;
		token[i] = strtok(NULL, " \t\n $");
	}
	free(first);
	return (token);
}
