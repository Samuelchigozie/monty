#include "monty.h"
/**
 * node_add - Adds a new node to the head of the stack.
 * @head: Pointer to the head of the stack.
 * @n: The value of the new node.
 * Return: No return value.
 * Author Samuel Chiozie
 */
void node_add(stack_t **head, int n)
{

	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
