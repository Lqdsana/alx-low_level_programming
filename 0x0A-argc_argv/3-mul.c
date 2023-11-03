#include <stdio.h>
#include <stdlib>

/**
 * main-print the result of the multiplication, followed by a new line.
 * @argc:number of command-line arguments.
 * @argv:pointer to an array of command-line arguments.
 * Return:0-success.
 */

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2])
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}