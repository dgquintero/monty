#include "monty.h"
/**
 * get_op_func - Funtion.
 * @command: command.
 * @h: h.
 * @count: count.
 */
void get_op_func(char **command, stack_t **h, unsigned int count)
{
	int i = 0;

	instruction_t op[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"nop", _nop},
		{NULL, NULL}
	};
	for (i = 0; op[i].opcode; i++)
	{
		if (strcmp(op[i].opcode, command[0]) == 0)
		{
			if (!strcmp(command[0], "push"))
				num = atoi(command[1]);
			op[i].f(h, count);
			break;
		}
	}

}
