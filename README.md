# Monty

Monty is a scripting language that interprets Monty ByteCodes files. It operates on a unique stack and provides specific instructions to manipulate it.

## Monty ByteCode Files

Monty byte code files have the extension .m. Each line in the file represents a single instruction. The opcode and its argument, if any, are separated by spaces. Additional spaces before or after the opcode and argument are allowed.

Monty byte code files can contain blank lines or lines with extra text after the opcode or argument. Such additional text is ignored during interpretation.

Here is an example of a Monty byte code file:

```
push 0
push 1
push 2
push 3
pall
push 4
push 5
push 6
pall
```

## Usage

To compile the program, use the following command:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

To run the program and interpret a Monty byte code file, use the following command:

```
./monty bytecode_file
```

## Available Operations

The following table lists the available operation codes and their descriptions:

| Opcode | Description |
|--------|-------------|
| push   | Pushes an element onto the stack |
| pall   | Prints all the values on the stack |
| pint   | Prints the value at the top of the stack |
| pop    | Removes the top element of the stack |
| swap   | Swaps the top two elements of the stack |
| add    | Adds the top two elements of the stack |
| nop    | No operation; does nothing |
| sub    | Subtracts the top element from the second top element |
| div    | Divides the second top element by the top element |
| mul    | Multiplies the top two elements of the stack |
| mod    | Computes the remainder of the division of the second top element by the top element |
| #      | Comment; ignored by the interpreter |
| pchar  | Prints the ASCII value of the top element as a character |
| pstr   | Prints the ASCII values of the elements as a string |
| rotl   | Rotates the top element to the bottom of the stack |
| rotr   | Rotates the bottom element to the top of the stack |
| stack  | Sets the stack format (LIFO) |
| queue  | Sets the queue format (FIFO) |
```
## Author
Samuel Chigozie
