#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of the array
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	/* declare variable */
	void *str;

	/* allocate a memory address */
	str = malloc(b);

	if (str == NULL)
		exit(98);

	return (str);
}
