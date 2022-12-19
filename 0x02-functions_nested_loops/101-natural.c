#include <stdio.h>

/**
 * main - check the code
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int i;
	int n = 1024;
	int result = 0;

	for (i = 0; i < n; i++)
	{
		if ((i % 3) == 0)
			result += i;
		else if ((i % 5) == 0)
			result += i;
	}
	printf("%d\n", result);

	return (0);
}
