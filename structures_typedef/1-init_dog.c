#include "dog.h"
#include <stddef.h>
/**
 * struct dog - Structure représentant un chien
 * @name: Le nom du chien
 * @age: L'âge du chien
 * @owner: Le nom du propriétaire du chien
 *
 * Description: Structure contenant les informations principales
 * d’un chien (nom, âge, propriétaire).
 */

/**
 * dog_t - Typedef pour struct dog
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
