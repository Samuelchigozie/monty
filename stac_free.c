#include "monty.h"
/**
 * free_stack - Deallocates memory for a doubly linked list.
 * @head: Pointer to the head of the stack.
 *
 * @Description: This function frees the memory occupied by a doubly linked list.
 * It takes the head of the stack as a parameter and deallocates memory for each node.
 * Note: This function does not return a value.
 * Author: Samuel Chigozie
 */
void free_stack(ter_stack *head)
{
	ter_stack *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
