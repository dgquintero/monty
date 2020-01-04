#include "monty.h"
/**
 *
 *
 *
 */
void get_op_func(char *command, stack_t **stack, unsigned int count)
{
	int i = 0;

	(void) stack;
	(void) count;

	instruction_t op[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{NULL, NULL}
	};

	while (op[i].opcode != NULL)
	{
		if (strcmp(command, op[i].opcode) == 0)
			break;
		i++;
	}
	exit(0);
}
