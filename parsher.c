#include "monty.h"
/**
 * main - Main funtion.
 * @argc: Argc.
 * @av: Argv.
 * Return: 0.
 */

void pharser(char *buffer, stack_t **h, unsigned int count)
{
	char *str, *token;

	str = strtok(buffer, " \n\t");
	token = strtok(NULL, " \n\t");
	sup.num = token;
	if (str && str[0] != '#')
		get_op_func(h, count, str);
}
