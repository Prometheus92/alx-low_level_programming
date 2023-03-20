#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free memory held by dog_t
 * @d: pointer to dog_t
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
