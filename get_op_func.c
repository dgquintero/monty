#include "monty.h"
/**
 *
 *
 *
 */
void get_op_func(char *command, stack_t **stack, unsigned int count)
{
	int i = 0;

	instruction_t op[] = {
		{"push", _push},
		{NULL, NULL}
	};

	while (op[i].opcode != NULL)
	{
		if (strcmp(command, op[i].opcode) == 0)
			break;
		i++;
	}
	(void) stack;
	(void) count;
	exit(0);
}
