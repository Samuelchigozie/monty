#include "monty.h"
/**
 * sub_func - Subtracts the top element of the stack from the second top element.
 * @head: Pointer to the head of the stack.
 * @counter: Line number.
 * Return: No return value.
 *
 * @Description: This function performs subtraction by subtracting the top element
 * of the stack from the second top element and pushes the result back onto the stack.
 * It takes the head of the stack and the current line number as parameters.
 * Note: This function does not return a value.
 * Author: Samuel Chigozie
 */
void sub_func(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*head = aux->next;
	free(aux);
}
