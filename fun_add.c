#include "monty.h"
/**
 * add_func - top two elements addition of the stack.
 * @head: Pointer to the head of the stack.
 * @counter: Line number.
 * Return: No return value.
 * Author Samuel Chiozie
 */
void add_func(ter_stack **head, unsigned int counter)
{
	ter_stack *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
