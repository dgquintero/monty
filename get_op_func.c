#include "monty.h"
/**
 *
 *
 *
 */
void (*get_op_func(char *s))(stack_t **h, unsigned int nn)
{
	int a = 0;

	(void) *s;
	instruction_t ops[] = {
		{"push", _push},
/**		{"pall", _pall},
		{"pint", _pint},*/
		{NULL, NULL}
	};
	while (ops[a].opcode != NULL)
	{
		if (strcmp(s, ops[a].opcode) == 0)
			break;
		a++;
	}
	return (ops[a].f);
}
