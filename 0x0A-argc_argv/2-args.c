#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: number of arguments passed
 * @argv: arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
