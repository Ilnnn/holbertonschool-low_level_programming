#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
void print_dog(struct dog *d)
{
	int d;

	if (d == NULL)
	printf("");

	if (d->name == NULL)
	printf("Name: (nil)");
	else
	printf("Name:" d->name);

	printf("Age" d->age)

	if (d->owner == NULL)
	printf("Owner (nil)");

	else
	printf("Owner" d->owner);
}