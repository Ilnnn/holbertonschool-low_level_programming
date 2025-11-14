#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - libère une structure dog
 * @d: pointeur vers la structure à libérer
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	if (d->name != NULL)
	free(d->name);

	if (d->owner != NULL)
	free(d->owner);

	free(d);
}
