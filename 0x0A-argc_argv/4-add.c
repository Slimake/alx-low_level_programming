#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments passed
 * @argv: arguments passed
 * Return: 0(success) or 1(Error)
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	if (argc > 1)
	{
		while (i < argc)
		{
			if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}

			i++;
		}

		printf("%d\n", sum);
	}

	return (0);
}
