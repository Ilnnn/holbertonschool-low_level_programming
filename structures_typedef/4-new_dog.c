#include <stdio.h>
#include "dog.h"
#include "stdlib.h"
/**
 * new_dog - crée un nouveau dog
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 *
 * Return: pointeur vers le nouveau dog, ou NULL si échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1 = 0;
	int len2 = 0;
	int i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len1] != '\0')
	len1++;

	while (owner[len2] != '\0')
	len2++;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	return (NULL);

	d->name = malloc(len1 + 1);
	if (d->name == NULL)

	{
	free(d);
	return (NULL);
	}

	d->owner = malloc(len2 + 1);
	if (d->owner == NULL)

	{
		free(d->name);
		free(d);
		return (NULL);
	}

	i = 0;
	while (i < len1)
	i++;
	d->name[i] = name[i];
	i++;
	d->name[i] = '\0';


	i = 0;
	while (i < len2)
	i++;
	d->owner[i] = owner[i];
	i++;
	d->owner[i] = '\0';

	d->age = age;

	return (d);
}
