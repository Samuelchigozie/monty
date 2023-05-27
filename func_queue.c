#include "monty.h"
/**
 * queue_func - Changes the stack behavior to a queue.
 * @head: Pointer to the head of the stack.
 * @counter: Line number.
 * Return: No return value.
 *
 * @Description: This function changes the behavior of the stack to a queue.
 * It takes the head of the stack and the current line number as parameters.
 * Note: This function does not return a value.
 * Author: Samuel Chigozie
 */
void queue_func(ter_stack **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}
/**
 * queue_add - Adds a new node to the tail of the stack.
 * @n: The value of the new node.
 * @head: Pointer to the head of the stack.
 * Return: No return value.
 *
 * @Description: This function adds a new node to the tail of the stack,
 * changing the behavior of the stack to a queue.
 * It takes the value of the new node and the head of the stack as parameters.
 * Note: This function does not return a value.
 */
void queue_add(ter_stack **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
