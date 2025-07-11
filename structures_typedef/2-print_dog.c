#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
void print_dog(struct dog *d)
{
	if (d != NULL)	
	{
		printf("Names: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
