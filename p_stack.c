#include "monty.h"
/**
 * pall_fun - Prints the elements in the stack.
 * @head: Pointer to the head of the stack.
 * @counter: Not used.
 * Return: No return value.
 *
 * @Description: This function prints all the elements in the stack.
 * It takes the head of the stack and the line counter (not used) as parameters.
 * Note: This function does not return a value.
 * Author: Samuel Chigozie
 */
void pall_fun(ter_stack **head, unsigned int counter)
{
	ter_stack *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
