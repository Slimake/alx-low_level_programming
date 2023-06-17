#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members to allocate memory
 * @size: size of the membets
 * Return: pointer to void(any data type)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/* declare variable */
	void *ptr;

	/* check if nmemb or size is zero */
	if (nmemb == 0 && size == 0)
		return (NULL);

	/* allocate memory */
	ptr = malloc(nmemb * size);

	/* check if allocation was successful */
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
