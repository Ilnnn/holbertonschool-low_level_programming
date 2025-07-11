#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initialise dog
 * @d: acceder a la struct
 * @name: ddd
 * @age: age
 * @owner: dldl
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
