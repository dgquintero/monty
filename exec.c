#include "monty.h"
/**
 *
 *
 *
 */
void pharse(char * xD)
{
	char buffer[BSIZE], *token, *av[1024];
	void *h;

	token = strtok(buffer, " \n");
	for (i = 0; i < 32 && token != NULL; i++)
	{
		av[i] = token;
		token = strtok(NULL, " \n");
	}
	av[i] = NULL;
	h = get_op_func(buffer);
}
