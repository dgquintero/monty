#include "monty.h"
/**
 *
 *
 *
 */
void (*get_op_func(char *s))(stack_t, unsigned int)
{
	int a = 0;

	(void) *s;
	instruction_t ops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{NULL, NULL}
	};
	while (ops[a].opcode != NULL)
	{
		if (strcmp(s, ops[a].opcode) == 0)
			break;
		a++;
	}



}
