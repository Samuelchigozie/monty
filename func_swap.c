#include "monty.h"
/**
 * swap_func - Swaps the positions of the top two elements in the stack.
 * @head: Pointer to the head of the stack.
 * @counter: Line number.
 * Return: No return value.
 *
 * @Description: This function swaps the positions of the top two elements in the stack.
 * It takes the head of the stack and the current line number as parameters.
 * Note: This function does not return a value.
 * Author: Samuel Chigozie
 */
void swap_func(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
