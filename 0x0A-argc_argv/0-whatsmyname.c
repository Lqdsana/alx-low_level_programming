#include <stdio.h>

/**
 * main-Entry point
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * prints the name of the program, including the path.
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
