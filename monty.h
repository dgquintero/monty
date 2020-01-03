#ifndef _MONTY_H_
#define _MONTY_H_
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define BSIZE 1024
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void (*get_op_func(char *s))(stack_t, unsigned int);
void _push(stack_t **head, unsigned int n);
stack_t *_pall(stack_t **head, const int n);
stack_t *_pint(stack_t **head, const int n);
stack_t *_pop(stack_t **head, const int n);
stack_t *_swap(stack_t **head, const int n);
stack_t *_add(stack_t **head, const int n);
stack_t *_nop(stack_t **head, const int n);

#endif /* _MONTY_H_ */
