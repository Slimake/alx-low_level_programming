#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer d of type dog_t
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
