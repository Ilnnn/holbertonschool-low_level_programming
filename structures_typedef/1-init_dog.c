#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initialise une structure de type struct dog
 * @d: Pointeur vers la structure à initialiser
 * @name: Nom du chien
 * @age: Âge du chien
 * @owner: Nom du propriétaire du chien
 *
 * Description: Cette fonction initialise les champs d'une structure
 * dog avec les valeurs fournies en paramètres.
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
