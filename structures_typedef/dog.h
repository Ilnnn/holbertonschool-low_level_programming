#ifndef _HEADER_
#define _HEADER_

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_print(struct dog *d);
#endif
