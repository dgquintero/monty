#include "monty.h"
/**
 * get_op_func - Funtion.
 * @command: command.
 * @h: h.
 * @count: count.
 */
void get_op_func(stack_t **h, unsigned int count, char *command)
{
	int i = 0;

	instruction_t op[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"add", _add},
		{"nop", _nop},
		{NULL, NULL}
	};

	while (op[i].opcode)
	{
		if ((strcmp(op[i].opcode, command)) == 0)
		{
			op[i].f(h, count);
			break;
		}
		i++;
	}
	if (op[i].f == NULL)
	{
		printf("L%d: unknown instruction %s\n", count, command);
		exit(EXIT_FAILURE);
	}
}
