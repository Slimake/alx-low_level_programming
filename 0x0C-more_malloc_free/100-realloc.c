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
	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == 0 && ptr == NULL)
		return (NULL);

	/*if (new_size > old_size) */
		/*return (ptr);*/

	if (new_size == old_size)
		return (ptr);

	ptr = malloc(old_size * new_size);

	if (ptr == NULL)
		return (NULL);

	free(ptr);

	return (ptr);
}
