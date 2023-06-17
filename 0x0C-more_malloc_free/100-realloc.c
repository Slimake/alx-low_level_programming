#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using a malloc and free
 * @ptr: a pointer to the memory previously allocated using malloc
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: size in bytes of the new memory block
 * Return: pointer to void data type
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pt;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	/* allocate memory if ptr is NULL */
	if (ptr == NULL)
	{
		pt = malloc(new_size);
		if (pt == NULL)
			return (NULL);
		else
			return (pt);
	}
	pt = malloc(new_size);
	if (pt == NULL)
		return (NULL);

	free(ptr);
	return (pt);
}
