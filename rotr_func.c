#include "monty.h"
/**
 * stack_rotat - Rotates the stack, moving the top element to the bottom.
 * @head: Pointer to the head of the stack.
 * @counter: Line number.
 * Return: No return value.
 *
 * @Description: This function rotates the stack, moving the top element to the bottom.
 * It takes the head of the stack and the current line number as parameters.
 * Note: This function does not return a value.
 * Author: Samuel Chigozie
 */
void stack_rotat(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
