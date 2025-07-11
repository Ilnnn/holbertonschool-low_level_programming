#ifndef _HEADER_
#define _HEADER_
/**
 * struct dog - Structure that stores information about a dog
 * @name: Name of the dog
 * @age: Age of the dog in years
 * @owner: Name of the dog's owner
 *
 * This structure stores information about a dog, including its name,
 * age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_print(struct dog *d);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
