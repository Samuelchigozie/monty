#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
/**
 * @struct stack_s - Doubly linked list representation of a stack (or queue).
 * @n: An integer representing the value stored in the node.
 * @prev: A pointer to the previous element of the stack (or queue).
 * @next: A pointer to the next element of the stack (or queue).
 *
 * @Description: This structure defines a node in a doubly linked list,
 * used for implementing stack, queue, LIFO, FIFO functionalities
 * in the Alx project.
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} ter_stack;
/**
 * @struct bus_s - Structure for holding variables: arg, file, line, content.
 * @arg: A value.
 * @file: A pointer to the monty file.
 * @content: The line content.
 * @lifi: A flag indicating a change between stack and queue.
 *
 * @Description: This structure is used to carry values throughout the program,
 * including arguments, file pointers, line contents, and stack/queue flags.
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  ter_bus;
extern ter_bus bus;
/**
 * @struct instruction_s - Structure for holding an opcode
 * @opcode: The opcode.
 * @f: A function pointer to handle the opcode.
 *
 * @Description: This structure defines an opcode and its associated function
 * for the stack, queue, LIFO, FIFO functionalities in the Alx project.
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(ter_stack **stack, unsigned int line_number);
} ter_instruct;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void push_fun(ter_stack **head, unsigned int number);
void queue_func(ter_stack **head, unsigned int counter);
void func_stack(ter_stack **head, unsigned int counter);
void pint_func(ter_stack **head, unsigned int number);
int func_execute(char *content, ter_stack **head, unsigned int counter, FILE *file);
void free_stack(ter_stack *head);
void func_pchar(ter_stack **head, unsigned int counter);
void prstr_func(ter_stack **head, unsigned int counter);
void add_func(ter_stack **head, unsigned int counter);
void func_noth(ter_stack **head, unsigned int counter);
void sub_func(ter_stack **head, unsigned int counter);
void div_func(ter_stack **head, unsigned int counter);
void multi_func(ter_stack **head, unsigned int counter);
void mod_func(ter_stack **head, unsigned int counter);
void node_add(ter_stack **head, int n);
void queue_add(ter_stack **head, int n);
void func_rotat(ter_stack **head, unsigned int counter);
void stack_rotat(ter_stack **head, __attribute__((unused)) unsigned int counter);
void func_pop(ter_stack **head, unsigned int counter);
void swap_func(ter_stack **head, unsigned int counter);
void pall_fun(ter_stack **head, unsigned int number);
#endif
