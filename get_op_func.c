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

	printf("123\n");

	instruction_t op[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"nop", _nop},
		{NULL, NULL}
	};
	printf("123\n");
	for (i = 0; op[i].opcode != NULL; i++)
	{
		if (strcmp(command[0], op[i].opcode) == 0)
		{
			num = atoi(command[1]);
			op[i].f(h, count);
			return;
		}
	}

}
