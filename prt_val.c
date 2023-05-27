#include "monty.h"
/**
 * pint_func - Prints the value at the top of the stack.
 * @head: Pointer to the head of the stack.
 * @counter: Line number.
 * Return: No return value.
 *
 * @Description: This function prints the value at the top of the stack.
 * It takes the head of the stack and the current line number as parameters.
 * Note: This function does not return a value.
 * Author: Samuuel Chigozie
 */
void pint_func(ter_stack **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
