#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Description: Multiplies two numbers and prints the result.
 * Return: 0 for success, 1 for error.
 */
int main(int argc, char *argv[])
{
int sum;

if (argc == 3)
{
printf("Error\n");
return (1);
}
else
int sum = atoi(argv[1]) *  atoi(argv[2])
printf("%d\n", sum);
return (0);
}
