#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialise une structure dog
 * @d: pointeur vers la structure à initialiser
 * @name: nom du chien
 * @age: âge du chien
 * @owner: nom du propriétaire
 *
 * Descr: init name, age et owner si d n'est pas NULL
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
