#include "monty.h"
/**
 * prstr_func - Prints the string starting at the top of the stack, 
 * followed by a new line.
 * @head: Pointer to the head of the stack.
 * @counter: Line number.
 * Return: No return value.
 *
 * @Description: This function prints the string starting at the top of the stack,
 * assuming that the values on the stack represent valid ASCII characters.
 * The string is printed followed by a new line character.
 * It takes the head of the stack and the current line number as parameters.
 * Note: This function does not return a value.
 * Author: Samuuel Chigozie
 */
void prstr_func(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
