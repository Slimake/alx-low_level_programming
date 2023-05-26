#include <stdio.h>

/**
 * main - print the largest prime factor of a number
 *
 * Return: 0
 */

int main(void)
{
	long i = 2;
	long num = 612852475143;
	long largest;

	while (i <= num)
	{

		if ((num % i) == 0)
		{
			num = num / i;
			largest = i;
			i = 1;
		}

		i++;
	}

	printf("%lu\n", largest);

	return (0);
}
