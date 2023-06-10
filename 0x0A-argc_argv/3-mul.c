#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed
 * @argv: arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int mul = 1;

	if (argc > 1)
	{
		while (i < argc)
		{
			mul *= atoi(argv[i]);
			i++;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", mul);

	return (0);
}
