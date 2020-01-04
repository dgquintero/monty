#include "monty.h"
/**
 * main - Main funtion.
 * @argc: Argc.
 * @av: Argv.
 * Return: 0.
 */

void pharser(char *buffer, stack_t **h, unsigned int count)
{
	char *tok, *token;

	tok = strtok(buffer, " \n\t");
	token = strtok(NULL, " \n\t");
	if (token)
		sup.num = atoi(token);
	if (tok)
		get_op_func(tok, h, count);
}
