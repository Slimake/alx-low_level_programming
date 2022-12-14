#include <unistd.h>

/**
 * print_alphabet - writes the alphabet characters to stdouti
 *
 *
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}
