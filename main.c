#include "monty.h"
ter_bus bus = {NULL, NULL, NULL, 0};
/**
 * main - Entry point for the Monty code interpreter.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments, including the Monty file location.
 * Return: 0 on success.
 *
 * @Description: This function serves as the main entry point
 *  for the Monty code interpreter.
 * It takes the number of command-line arguments (argc) 
 * and an array of arguments (argv)
 * which includes the Monty file location.
 * The function executes the Monty code in the file
 * and returns 0 on successful execution.
 * Author: Samuel Chigozie
 */
int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	ter_stack *stack = NULL;
	unsigned int counter = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		bus.content = content;
		counter++;
		if (read_line > 0)
		{
			func_execute(content, &stack, counter, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
