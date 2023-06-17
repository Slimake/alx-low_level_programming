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
	unsigned int i;
	char *ptr;

	/* check if nmemb or size is zero */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocate memory */
	ptr = malloc(nmemb * size);

	/* check if allocation was successful */
	if (ptr == NULL)
		return (NULL);

	/* loop through each nmemb to set the value to zero */
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;

	return (ptr);
}
