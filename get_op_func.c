#include "monty.h"
/**
 *
 *
 *
 */
void get_op_func(char *command, stack_t **h, unsigned int count)
{
	int i = 0;

	instruction_t op[] = {
		{"push", _push},
		{"pall", _pall},
		{NULL, NULL}
	};
	for (i = 0; op[i].opcode != NULL; i++)
	{
		if (strcmp(command, op[i].opcode) == 0)
		{
			op[i].f(h, count);
			return;
		}
	}

}
