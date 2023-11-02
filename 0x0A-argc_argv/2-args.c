header 
#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * prints the number of arguments passed into it.
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
	return (0);
}
