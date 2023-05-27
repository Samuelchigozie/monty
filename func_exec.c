#include "monty.h"
/**
* func_execute - This execute the opcode
* @stack: The head linked list of the stack
* @counter: The counter of the line
* @file: The poiner to the monty file
* @content: The line content
* Return: There is no return
* Author: Samuel Chigozie
*/
int func_execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	ter_instruct opst[] = {
				{"push", push_fun}, {"pall", pall_fun}, {"pint", pint_func},
				{"pop", func_pop},
				{"swap", swap_func},
				{"add", add_func},
				{"nop", func_noth},
				{"sub", sub_func},
				{"div", div_func},
				{"mul", multi_func},
				{"mod", mod_func},
				{"pchar", func_pchar},
				{"pstr", prstr_func},
				{"rotl", func_rotat},
				{"rotr", stack_rotat},
				{"queue", queue_func},
				{"stack", func_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
