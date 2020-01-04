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
	char **token, *tok, *dup_token, *first_dup;

	first_dup = strdup(buffer);
	dup_token = strdup(buffer);
	tok = strtok(first_dup, " \t\n $");
	i++;
	while (tok != NULL)
	{
		tok = strtok(NULL, " \t\n $");
		i++;
	}
	token = malloc(sizeof(char *) * i);
	i = 0;
	token[i] = strtok(dup_token, " \t\n $");
	while (token[i] != NULL)
	{
		i++;
		token[i] = strtok(NULL, " \t\n $");
	}
	free(first_dup);
	return (token);
}
