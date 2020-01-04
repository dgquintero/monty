#include "monty.h"
/**
 * main - Main funtion.
 * @argc: Argc.
 * @av: Argv.
 * Return: 0.
 */
char **pharser(char *buffer)
{
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
