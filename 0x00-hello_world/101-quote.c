/**
 * main - prints text to the stderr
 *
 * Return: 1
 */

#include <unistd.h>
#include <string.h>

int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, text, strlen(text));
	return (1);
}
